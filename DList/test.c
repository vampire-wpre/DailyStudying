#include"DList.h"
void TestList01()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	Listprint(plist);
	ListPopBack(plist);
	ListPopFront(plist);
	ListPushFront(plist, 222);
	Listprint(plist);
}
int main()
{
	TestList01();
}



