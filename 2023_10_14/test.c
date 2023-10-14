#include<stdio.h>
//错题集
//1、编写程序数一下 1到 100 的所有整数中出现多少个数字9
//我的做法
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		//if (i == 9 || i % 10 == 9 || i / 10 == 9)
		//{
		//	count++;
		//}
		if (i % 10 == 9)
		{

			count++;
		}
		else if(i/10==9)
		{
			count++;
		}
	}
	printf("%d\n", count);//输出结果为19
	return 0;
}


//正确答案
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);//输出结果20
//	return 0;
//}