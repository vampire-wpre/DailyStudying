#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//a = a ^ b;
//b = a ^ b;
//a = a ^ b;



//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:a= %d b= %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后:a = %d b = %d\n", a, b);
//	return 0;
//}
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
void Fun1(int n)//奇数位
{
	//23
	//00010101
	printf("奇数位\n");
	for (int i = 0; i < 32; i += 2)
	{
		int ret = 0;
		ret = (n >> i) & 1;
		printf("%d ", ret);
	}

}
void Fun2(int n)//偶数位
{
	//100
	//01100100
	printf("偶数位\n");
	for (int i = 1; i < 32; i += 2)
	{
		int ret = 0;
		ret = (n >> i) & 1;
		printf("%d ", ret);
	}

}


void Printbit(int num)
{
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");

	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}


int main()
{
	//从二进制序列右边往左打印的
	int n = 0;
	scanf("%d", &n);
	//Fun1(n);
	//printf("\n");
	//Fun2(n);
	Printbit(n);
	return 0;
}

//
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//
//输入例子 :
//
//1999  011111001111
//2299  100011111011
//
//输出例子 : 7

//int CountBits(int a,int b)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) != ((b >> i) & 1))
//		{
//			count++;
//		}
//	}
//
//	a& (a - 1);
//	
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int  ret = CountBits(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}
