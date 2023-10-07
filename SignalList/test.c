#include"SignalList1.h"
int main()
{

	SL* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPushBack(&plist, 6);
	SListPushBack(&plist, 7);
	SListPushBack(&plist, 8);
	SListPrint(&plist);
	SListPopBack(&plist);
	SListPrint(&plist);
	SListPopFront(&plist);
	SListPrint(&plist);
	SListPushFront(&plist, 100);
	SListPrint(&plist);
	SL* ret = SListFind(&plist, 3);
	printf("%d\n", ret->data);
	//SListErease(&plist, ret);
	SListPrint(&plist);
	SListInsertBefore(&plist, ret, 999);
	SListPrint(&plist);
	SListInsertAfter(&plist, ret, 666);
	SListPrint(&plist);
	return 0;
}