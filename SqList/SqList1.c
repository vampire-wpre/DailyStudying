#include"SqList1.h"

void SeqListInit(SL* ps)//��ʼ��
{
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
void SeqListCheck(SL* ps)//��������Ƿ�������������
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
void SeqListPushFront(SL* ps,DataType x)//ͷ��
{
	SeqListCheck(ps);//�������
	int end = ps->size - 1;//�±�endָ���һ��Ԫ��
	while (end >= 0)//Ų����
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPushBack(SL* ps, DataType x)//β��
{
	SeqListCheck(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPrint(SL* ps)//��ӡ
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqListPopBack(SL*ps)//βɾ
{
	assert(ps->size > 0);//��֤Ԫ�ظ�����Ϊ0
	ps->size--;
}
void SeqListPopFront(SL* ps)//ͷɾ
{
	assert(ps->size > 0);//��֤�����ݣ���������ɾ��
	int begin = 1;
	while (begin<=ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;
}
int SeqListFind(SL* ps, DataType x)//�ҵ�x��λ�ã������±꣬�Ҳ�������-1
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
void SeqListErease(SL* ps, int pos)//ɾ���±�posλ�õ�����
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
void SeqListInsert(SL* ps, int pos, DataType x)//���±�posλ��֮ǰ����x
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
void SeqListInsertBack(SL* ps, int pos, DataType x)//���±�posλ��֮�����x
{
	assert(pos >= 0 && pos <= ps->size - 1);
	SeqListCheck(ps);
	//��pos֮�����������Ų 1 2 3 4 pos  6 7 8 9
	int temp = ps->size - 1;
	while (temp>=pos+1)
	{
		ps->a[temp + 1] = ps->a[temp];
		temp--;
	}
	ps->a[pos + 1] = x;
	ps->size++;
}