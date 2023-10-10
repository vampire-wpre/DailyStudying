#include"Queue.h"

void QueueInit(Queue* pq)//初始化
{
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;
}

void QueueDestroy(Queue* pq)//销毁
{
	assert(pq);
	QueueNode* cur = pq->head;
	while (cur != NULL)
	{
		QueueNode* next = cur->next;//1、要删除cur位置之前先保存好下一个位置next，不然删完找不到下一个位置
		free(cur);//2、删除cur
		cur = next;//cur=下一个位置
	}
	pq->head = pq->tail = NULL;//循环结束，头和尾置空
}
void QueuePush(Queue* pq, DataType x)//入队(存储数据)
{
	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	if (pq->head == NULL)//链表是空的
	{
		pq->head = pq->tail = newnode;//让head和tail指向新的结点
	}
	else//链表不为空
	{
		pq->tail->next = newnode;//tail的next给新的结点
		pq->tail = newnode;//tail位置更新
	}
}
void QueuePop(Queue* pq)//出队(删除数据)
{
	assert(pq);
	assert(!QueueEmpty(pq));//链表不为空才能删
	//assert(pq->head != NULL);//链表不为空才能删
	QueueNode* cur = pq->head->next;
	free(pq->head);
	//当只剩一个结点时，tail=head，此时tail也被free了，当所有的数据都删了时，head=NULL，但是tail指向随机的，野指针
	pq->head = cur;
	if (pq->head == NULL)
	{
		pq->tail = NULL;
	}
}
DataType QueueFront(Queue* pq)//取队头的数据
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->head->data;
}
DataType QueueBack(Queue* pq)//取队尾的数据
{
	assert(pq);
	assert(!QueueEmpty(pq));//链表不为空

	return pq->head->data;
}
int QueueSize(Queue* pq)//计算队列里含有多少个数据
{
	assert(pq);
	int n = 0;
	QueueNode* cur = pq->head;
	while (cur)//遍历一下这个队列，用cur记录下来
	{
		++n;
		cur = cur->next;
	}
	return n;
}
bool QueueEmpty(Queue* pq)//判断队列是否为空
{
	assert(pq);
	return pq->head == NULL;//如果队列为空返回1，否则返回0
}