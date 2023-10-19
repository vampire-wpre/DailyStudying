#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
//int main()
//{
//	//srand((unsigned int)time(NULL));//使用rand函数之前将时间戳设置为随机数种子，让rand为真随机
//	//printf("%d\n", rand());//使用rand生成随机数
//	//生成 m--n的随机数
//	//rand()%(n-m+1)+n
//	srand((unsigned int)time(NULL))
//	printf("%d", rand() % 100 + 1);//生成1-100
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;//b = c++是一个语句，c++是另一个语句，这一行代码不是逗号表达式
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
int main()
{
	int a; int i = 0;
	while (scanf("%d", &a)!=EOF)
	{
		
		for (i = 0; i < a; i++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}