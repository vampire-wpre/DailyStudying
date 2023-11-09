#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = arr;
//	int* p2 = &arr[9];
//	printf("%d\n", (int)(p2 - p1));//指针-指针
//	return 0;
//}

//int My_strlen(char arr[])
//{
//	char* ps = arr;
//	char* p = arr;
//	while (*(p)!='\0')
//	{
//		p++;
//	}
//	return p - ps;
//}
//
//int main()
//{
//
//	char arr[] = "abcdefg";
//	int count = my_strlen(arr);
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	const int* pa = &a;
//	*pa = 100;//err
//	pa = &b;//OK
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* const pa = &a;
//	*pa = 100;//OK
//	pa = &b;//err
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(pa) = 1;
//		pa++;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(pa+i) = 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int* ptr;//野指
//	*ptr = 200;//非法访问
//	printf("%p\n", ptr);
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int* pa = arr;
//	for (int i = 0; i < 10; i++)//非法访问数组，造成野指针
//	{
//		*pa = 1;
//		pa++;
//	}
//	return 0;
//}

int main()
{
	int* p = NULL;
	//*p = 100;//非法
	int arr[10] = { 0 };
	p = arr;
	*p = 100;
	return 0;
}