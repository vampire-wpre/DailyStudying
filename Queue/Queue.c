#include"Queue.h"

void QueueInit(Queue* pq)//��ʼ��
{
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;
}

void QueueDestroy(Queue* pq)//����
{
	assert(pq);
	QueueNode* cur = pq->head;
	while (cur != NULL)
	{
		QueueNode* next = cur->next;//1��Ҫɾ��curλ��֮ǰ�ȱ������һ��λ��next����Ȼɾ���Ҳ�����һ��λ��
		free(cur);//2��ɾ��cur
		cur = next;//cur=��һ��λ��
	}
	pq->head = pq->tail = NULL;//ѭ��������ͷ��β�ÿ�
}
void QueuePush(Queue* pq, DataType x)//���(�洢����)
{
	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	if (pq->head == NULL)//�����ǿյ�
	{
		pq->head = pq->tail = newnode;//��head��tailָ���µĽ��
	}
	else//����Ϊ��
	{
		pq->tail->next = newnode;//tail��next���µĽ��
		pq->tail = newnode;//tailλ�ø���
	}
}
void QueuePop(Queue* pq)//����(ɾ������)
{
	assert(pq);
	assert(!QueueEmpty(pq));//����Ϊ�ղ���ɾ
	//assert(pq->head != NULL);//����Ϊ�ղ���ɾ
	QueueNode* cur = pq->head->next;
	free(pq->head);
	//��ֻʣһ�����ʱ��tail=head����ʱtailҲ��free�ˣ������е����ݶ�ɾ��ʱ��head=NULL������tailָ������ģ�Ұָ��
	pq->head = cur;
	if (pq->head == NULL)
	{
		pq->tail = NULL;
	}
}
DataType QueueFront(Queue* pq)//ȡ��ͷ������
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->head->data;
}
DataType QueueBack(Queue* pq)//ȡ��β������
{
	assert(pq);
	assert(!QueueEmpty(pq));//����Ϊ��

	return pq->head->data;
}
int QueueSize(Queue* pq)//��������ﺬ�ж��ٸ�����
{
	assert(pq);
	int n = 0;
	QueueNode* cur = pq->head;
	while (cur)//����һ��������У���cur��¼����
	{
		++n;
		cur = cur->next;
	}
	return n;
}
bool QueueEmpty(Queue* pq)//�ж϶����Ƿ�Ϊ��
{
	assert(pq);
	return pq->head == NULL;//�������Ϊ�շ���1�����򷵻�0
}