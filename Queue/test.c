#include"Queue.h"


void test()
{
	Queue q;//����һ���ṹ��q��q����������ָ��
	QueueInit(&q);//��q�ĵ�ַ����ȥ���ı������ֵ
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	int ret = QueueSize(&q);
	while (!QueueEmpty(&q))//������������
	{
		DataType front = QueueFront(&q);
		printf("%d ", front);
		QueuePop(&q);
	}

	printf("%d\n", ret);
}
int main()
{
	test();


	return 0;
}