#include"Stack.h"
//void StackPrint(ST* ps)
//{
//	int i = 0;
//	for (i = 0; i < ps->top; i++)
//	{
//		printf("%d ", ps->a[i]);
//	}
//}
void StackInit(ST* ps)//��ʼ��
{

	assert(ps);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;//��ʼ��ʱtop��0��ζ��topָ��ջ�����ݵ���һ��λ�ã������-1����ζ��topָ��ջ������
}
void StackPush(ST* ps,DataType x)//��ջ
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
void StackDestroy(ST* ps)//����
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}
void StackPop(ST* ps)//��ջ
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}
bool StackEmpty(ST* ps)//�ж�ջ�Ƿ�Ϊ��
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
DataType StackTop(ST* ps)//ȡ��ջ������
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}
int StackSize(ST* ps)//����ջ���ж��ٸ�����
{
	assert(ps);
	return ps->top;
}