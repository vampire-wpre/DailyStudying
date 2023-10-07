#include"SignalList1.h"

void SListPrint(SL** phead)//打印
{
	SL* temp = *phead;
	while (temp != NULL)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}
SL* BuyNewnode(DataType x)//申请新的结点
{
	SL* newnode = (SL*)malloc(sizeof(SL));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SListPushBack(SL** phead, DataType x)//尾插
{
	SL* newnode = BuyNewnode(x);//创建新的结点
	assert(newnode);
	//找到尾
	SL* tail = *phead;
	if (tail == NULL)//如果链表为空
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
void SListPopBack(SL** phead)//尾删
{
	assert(*phead);
	if ((*phead)->next == NULL)//如果只有一个结点
	{
		free(*phead);
		*phead = NULL;
	}
	else
	{
		SL* tail = *phead;
		SL* prev = NULL;
		while (tail->next != NULL)//找尾
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}
void SListPopFront(SL** phead)//头删
{
	SL* temp = *phead;
	(*phead) = (*phead)->next;
	free(temp);
	temp = NULL;
}
void SListPushFront(SL** phead, DataType x)//头插
{
	SL* newnode = BuyNewnode(x);
	newnode->next = *phead;
	*phead = newnode;
}
SL* SListFind(SL** phead, DataType x)//查找元素x并且返回它的结点,找不到返回NULL
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
void SListErease(SL** phead, SL* pos)//删除pos结点
{
	SL* prev = *phead;//记录pos前一个结点位置
	while(prev->next!=pos)
	{ 
		prev = prev->next;
	}//prev找到了
	prev->next = pos->next;
	free(pos);
	pos = NULL;
}
void SListInsertBefore(SL** phead, SL* pos, DataType x)//在pos之前插入x
{
	SL* newnode = BuyNewnode(x);
	SL* prev = *phead;//记录pos前一个结点位置
	while (prev->next != pos)
	{
		prev = prev->next;
	}//prev找到了
	newnode->next = pos;
	prev->next = newnode;
}
void SListInsertAfter(SL** phead, SL* pos, DataType x)//在pos之后插入x
{
	SL* newnode = BuyNewnode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}