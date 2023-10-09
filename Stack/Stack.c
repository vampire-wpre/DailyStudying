#include"Stack.h"
//void StackPrint(ST* ps)
//{
//	int i = 0;
//	for (i = 0; i < ps->top; i++)
//	{
//		printf("%d ", ps->a[i]);
//	}
//}
void StackInit(ST* ps)//初始化
{

	assert(ps);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;//初始化时top是0意味着top指向栈顶数据的下一个位置；如果是-1，意味着top指向栈顶数据
}
void StackPush(ST* ps,DataType x)//进栈
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		DataType* tmp = realloc(ps->a, sizeof(DataType) * newCapacity);
		if (tmp == NULL)
		{
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
	ps->a[ps->top] = x;
	ps->top++;
}
void StackDestroy(ST* ps)//销毁
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}
void StackPop(ST* ps)//出栈
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}
bool StackEmpty(ST* ps)//判断栈是否为空
{
	assert(ps);
	//if (ps->top == 0)
	//{
	//	return true;
	//}
	//else
	//{
	//	return false;
	//}
	return ps->top == 0;
}
DataType StackTop(ST* ps)//取出栈顶数据
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}
int StackSize(ST* ps)//计算栈内有多少个数据
{
	assert(ps);
	return ps->top;
}