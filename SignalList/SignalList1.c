#include"SignalList1.h"

void SListPrint(SL** phead)//��ӡ
{
	SL* temp = *phead;
	while (temp != NULL)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}
SL* BuyNewnode(DataType x)//�����µĽ��
{
	SL* newnode = (SL*)malloc(sizeof(SL));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SListPushBack(SL** phead, DataType x)//β��
{
	SL* newnode = BuyNewnode(x);//�����µĽ��
	assert(newnode);
	//�ҵ�β
	SL* tail = *phead;
	if (tail == NULL)//�������Ϊ��
	{
		*phead = newnode;
	}
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
void SListPopBack(SL** phead)//βɾ
{
	assert(*phead);
	if ((*phead)->next == NULL)//���ֻ��һ�����
	{
		free(*phead);
		*phead = NULL;
	}
	else
	{
		SL* tail = *phead;
		SL* prev = NULL;
		while (tail->next != NULL)//��β
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}
void SListPopFront(SL** phead)//ͷɾ
{
	SL* temp = *phead;
	(*phead) = (*phead)->next;
	free(temp);
	temp = NULL;
}
void SListPushFront(SL** phead, DataType x)//ͷ��
{
	SL* newnode = BuyNewnode(x);
	newnode->next = *phead;
	*phead = newnode;
}
SL* SListFind(SL** phead, DataType x)//����Ԫ��x���ҷ������Ľ��,�Ҳ�������NULL
{
	SL* temp = *phead;
	while (temp != NULL)
	{
		if (temp->data == x)
		{
			return temp;
		}
		else
		{
			temp = temp->next;
		}
	}
	return NULL;
}
void SListErease(SL** phead, SL* pos)//ɾ��pos���
{
	SL* prev = *phead;//��¼posǰһ�����λ��
	while(prev->next!=pos)
	{ 
		prev = prev->next;
	}//prev�ҵ���
	prev->next = pos->next;
	free(pos);
	pos = NULL;
}
void SListInsertBefore(SL** phead, SL* pos, DataType x)//��pos֮ǰ����x
{
	SL* newnode = BuyNewnode(x);
	SL* prev = *phead;//��¼posǰһ�����λ��
	while (prev->next != pos)
	{
		prev = prev->next;
	}//prev�ҵ���
	newnode->next = pos;
	prev->next = newnode;
}
void SListInsertAfter(SL** phead, SL* pos, DataType x)//��pos֮�����x
{
	SL* newnode = BuyNewnode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}