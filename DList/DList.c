#include"DList.h"
// 初始化创建头结点
ListNode* ListInit()
{
	//哨兵位的头结点
	ListNode* phead = BuyListNode(0);//phead指向哨兵位的头
	phead->next = phead;//最后一个结点的next要指向第一个结点，第一个结点的prev要指向最后一个结点，而初始化时只有一个结点
	phead->prev = phead;//所以next和prev指向他自己
	return phead;//返回phead指针，用plist接收
}
// 动态申请一个结点
ListNode* BuyListNode(LTDataType x)
{
	ListNode* NewNode = (ListNode*)malloc(sizeof(ListNode));
	if (NewNode == NULL)
	{
		printf("分配内存失败\n");
		exit(-1);
	}
	NewNode->prev = NewNode->next = NULL;
	NewNode->data = x;
	return NewNode;
}
// 打印
void Listprint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)//当cur=phead时结束
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
// 尾插
void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);//plist不为空
	ListNode* NewNode = BuyListNode(x);//创建新的结点
	ListNode* tail = phead->prev;//找到链表的尾tail
	tail->next = NewNode;
	NewNode->prev = tail;
	phead->prev = NewNode;
	NewNode->next = phead;
}
// 尾删
void ListPopBack(ListNode* phead)
{

	assert(phead);//pehead不能为空指针
	assert(phead->next != phead);//链表不等于空
	ListNode* tail = phead->prev;
	ListNode* tail_prev = tail->prev;
	tail_prev->next = phead;//1
	phead->prev = tail_prev; //2  1和2没有先后关系
	free(tail);
	tail = NULL;
}
// 头插
void ListPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);//pehead不能为空指针
	ListNode* NewNode = BuyListNode(x);
	ListNode* first = phead->next;
	phead->next = NewNode;
	NewNode->prev = phead;

	NewNode->next = first;
	first->prev = NewNode;
}
// 头删
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
// 查找
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
// 在pos位置前插入
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
// 删除pos位置的结点
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