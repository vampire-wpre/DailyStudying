#include"SqList1.h"

void SeqListInit(SL* ps)//初始化
{
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
void SeqListCheck(SL* ps)//检查容量是否满，满了扩容
{
	if (ps->capacity == ps->size)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		DataType* temp = (DataType*)realloc(ps->a, newcapacity * sizeof(DataType));
		assert(temp);
		ps->a = temp;
		ps->capacity = newcapacity;
	}
}
void SeqListPushFront(SL* ps,DataType x)//头插
{
	SeqListCheck(ps);//检查容量
	int end = ps->size - 1;//下标end指最后一个元素
	while (end >= 0)//挪数据
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPushBack(SL* ps, DataType x)//尾插
{
	SeqListCheck(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPrint(SL* ps)//打印
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqListPopBack(SL*ps)//尾删
{
	assert(ps->size > 0);//保证元素个数不为0
	ps->size--;
}
void SeqListPopFront(SL* ps)//头删
{
	assert(ps->size > 0);//保证有数据，这样才能删除
	int begin = 1;
	while (begin<=ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;
}
int SeqListFind(SL* ps, DataType x)//找到x的位置，返回下标，找不到返回-1
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void SeqListErease(SL* ps, int pos)//删除下标pos位置的数据
{
	assert(pos >= 0 && pos <= ps->size - 1);
	int temp = pos;
	while (temp<=ps->size-1)
	{
		ps->a[temp] = ps->a[temp + 1];
		temp++;
	}
	ps->size--;
}
void SeqListInsert(SL* ps, int pos, DataType x)//在下标pos位置之前插入x
{
	
	assert(pos >= 0 && pos <= ps->size - 1);
	SeqListCheck(ps);
	int temp = ps->size - 1;
	while (temp>=pos)
	{
		ps->a[temp + 1] = ps->a[temp];
		temp--;
	}
	ps->a[pos] = x;
	ps->size++;
}
void SeqListInsertBack(SL* ps, int pos, DataType x)//在下标pos位置之后插入x
{
	assert(pos >= 0 && pos <= ps->size - 1);
	SeqListCheck(ps);
	//把pos之后的数据往后挪 1 2 3 4 pos  6 7 8 9
	int temp = ps->size - 1;
	while (temp>=pos+1)
	{
		ps->a[temp + 1] = ps->a[temp];
		temp--;
	}
	ps->a[pos + 1] = x;
	ps->size++;
}