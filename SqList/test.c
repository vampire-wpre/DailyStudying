#include"SqList1.h"
int main()
{
	SL s;
	SeqListInit(&s);
	SeqListPushFront(&s, 1);
	SeqListPushFront(&s, 2);
	SeqListPushFront(&s, 3);
	SeqListPushFront(&s, 4);
	SeqListPushFront(&s, 5);
	SeqListPrint(&s);
	int ret = SeqListFind(&s, 3);
	SeqListInsertBack(&s, ret, 100);
	SeqListPrint(&s);
	return 0;
}