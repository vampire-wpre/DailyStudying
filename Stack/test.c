#include"Stack.h"


void test()
{
	ST st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	while (!StackEmpty(&st))//³öÕ»
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}
}
int main()
{
	test();
	return 0;
}
