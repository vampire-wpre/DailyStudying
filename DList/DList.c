#include"DList.h"
// ��ʼ������ͷ���
ListNode* ListInit()
{
	//�ڱ�λ��ͷ���
	ListNode* phead = BuyListNode(0);//pheadָ���ڱ�λ��ͷ
	phead->next = phead;//���һ������nextҪָ���һ����㣬��һ������prevҪָ�����һ����㣬����ʼ��ʱֻ��һ�����
	phead->prev = phead;//����next��prevָ�����Լ�
	return phead;//����pheadָ�룬��plist����
}
// ��̬����һ�����
ListNode* BuyListNode(LTDataType x)
{
	ListNode* NewNode = (ListNode*)malloc(sizeof(ListNode));
	if (NewNode == NULL)
	{
		printf("�����ڴ�ʧ��\n");
		exit(-1);
	}
	NewNode->prev = NewNode->next = NULL;
	NewNode->data = x;
	return NewNode;
}
// ��ӡ
void Listprint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)//��cur=pheadʱ����
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
// β��
void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);//plist��Ϊ��
	ListNode* NewNode = BuyListNode(x);//�����µĽ��
	ListNode* tail = phead->prev;//�ҵ������βtail
	tail->next = NewNode;
	NewNode->prev = tail;
	phead->prev = NewNode;
	NewNode->next = phead;
}
// βɾ
void ListPopBack(ListNode* phead)
{

	assert(phead);//pehead����Ϊ��ָ��
	assert(phead->next != phead);//�������ڿ�
	ListNode* tail = phead->prev;
	ListNode* tail_prev = tail->prev;
	tail_prev->next = phead;//1
	phead->prev = tail_prev; //2  1��2û���Ⱥ��ϵ
	free(tail);
	tail = NULL;
}
// ͷ��
void ListPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);//pehead����Ϊ��ָ��
	ListNode* NewNode = BuyListNode(x);
	ListNode* first = phead->next;
	phead->next = NewNode;
	NewNode->prev = phead;

	NewNode->next = first;
	first->prev = NewNode;
}
// ͷɾ
void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* first = phead->next;
	ListNode* second = first->next;
	phead->next = second;
	second->prev = phead;
	free(first);
	first = NULL;
}
// ����
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}
// ��posλ��ǰ����
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* NewNode = BuyListNode(x);
	ListNode* PosPrev = pos->prev;
	PosPrev->next = NewNode;
	NewNode->prev = PosPrev;
	NewNode->next = pos;
	pos->prev = NewNode;
}
// ɾ��posλ�õĽ��
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* PosPrev = pos->prev;
	ListNode* PosNext = pos->next;
	PosPrev->next = PosNext;
	PosNext->prev = PosPrev;
	free(pos);
	pos = NULL;
}