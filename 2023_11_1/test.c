#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main1()
{
	int i = 0;
	int j = 0;
	int n = 0;


	while (scanf("%d", &n) != EOF)
	{
		//打印上半部分
		for (i = 0; i < n; i++)
		{
			//n=6
		   //kg		5 4 3 2 1
			//i		0 1 2 3 4
			//n-i-1 5 4 3 2 
			for (int k = 0; k <= n - i - 1; k++)
			{
				printf(" ");
			}
			//i		0 1 2 3 4
			//#		1 3 5 7 9
			//2*i+1 1 3
			for (j = 0; j < 2 * i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		//打印下半部分

		for (i = n; i >= 0; i--)
		{
			//n=6
			// i= 6 5 4 3 2 1 0
			//空格 0 1 2 3 4 5 6
			//n-i  0 
			for (int k = 0; k < n - i; k++)
			{
				printf(" ");
			}
			for (j = 0; j < 2 * i + 1; j++)
			{
				printf("*");
			}
			//2*i+1
			//#		13 11 9 7 5 3 1
			//i		6  5  4 3 2 1 0
			//n=6
			printf("\n");
		}

	}
	return 0;
}









int CountBites(int i)
{
		int count = 0;//计算几位数
		do
		{
			count++;//count计算出i是几位数
			i /= 10;
		} while (i);
		return count;
}

int main2()//计算水仙花数
{
	//n 位数   每个位的数的n次方之和都等于它本身
	//    12345    1^5+2^5+3^5
	int sum = 0;
	for (int i = 99; i < 100000; i++)
	{
		int sum = 0;
		int bites = CountBites(i);
		int ret = i;
		while (ret)
		{
			sum += pow((ret % 10), (double)bites);
			ret /= 10;
		}
		if (sum == i)
		{
			printf("%d ", sum);
		}

	}
	return 0;
}



int main()
{
	int Sn = 0;
	int a = 0;
	scanf("%d", &a);
	int ret = a;

	for (int i = 0; i < 5; i++)
	{
		Sn += ret;
		ret = ret * 10 + a;
	}
	printf("%d\n", Sn);

	return 0;
}