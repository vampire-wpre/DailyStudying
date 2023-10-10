#include"Queue.h"


void test()
{
	Queue q;//创建一个结构体q，q里面有两个指针
	QueueInit(&q);//把q的地址传过去，改变里面的值
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	int ret = QueueSize(&q);
	while (!QueueEmpty(&q))//出列所有数据
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