#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


int main7()
{
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	scanf("%s%s", arr1, arr2);
	if (strcmp(arr1, arr2) == 0)
	{
		printf("same\n");
	}
	else {
		printf("different\n");
	}
	return 0;
}



int main6() {
	int arr[55];
	int N = 0;
	int insert = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);//输入N个整数
	}
	scanf("%d", &insert);//输入要插入的数
	int* pa = arr;//指向arr的指针
	while ((insert) >= (*pa))
	{
		pa++;
	}
	//挪动数据
	int* left = &arr[N - 1];
	while (left >= pa)
	{
		(*(left + 1)) = (*left);
		left--;
	}
	(*pa) = insert;//插入数据
	for (int j = 0; j < N + 1; j++)
	{
		printf("%d ", arr[j]);
	}
	return 0;
}






int main5()
{
	int yuwen, shuxue, yyu;
	scanf("%d %d %d", &yuwen, &shuxue, &yyu);
	int max = 0;
	if (shuxue > max)
	{
		max = shuxue;
	}
	if (yyu > max)
	{
		max = yyu;
	}
	if (yuwen > max)
	{
		max = yuwen;
	}
	printf("%d\n", max);
	return 0;
}


//ABBABBAAB0
int main4()
{
	char arr[100] = { 0 };
	gets(arr);
	char* str = arr;
	int countA = 0;
	int countB = 0;
	while (*str)
	{
		if ((*str) == 'A')
		{
			countA++;
		}
		else if ((*str) == 'B')
		{
			countB++;
		}
		str++;
	}
	if (countA > countB)
	{
		printf("A\n");
	}
	else if (countA < countB)
	{
		printf("B\n");
	}
	else {
		printf("E\n");
	}
	return 0;
}






int main3()
{
	int score = 0;
	while (scanf("%d", &score) != EOF)
	{
		switch (score / 10)
		{
		case 9:
		case 10:
			printf("Perfect\n");
			break;
		default:
			break;
		}
	}
	return 0;
}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//
//买20瓶 -->20个空瓶子            喝20
//       -->换10瓶汽水(10个空瓶子) 喝10
//       -->换5瓶汽水(5个空瓶子)   喝5
//       -->换(5/2)2瓶汽水		喝2
//       -->换1瓶汽水				喝1


int main2()
{

	int money = 0;//给了多少块钱
	int empty = 0;//空瓶子的数目
	int count = 0;//统计能喝多少瓶
	int left = 0;//统计有没有多余的空瓶子
	scanf("%d", &money);//输入给了多少钱

	empty = money;//一开始喝完所有的有money个空瓶子
	count = money;//一开始能喝money瓶

	while (empty)
	{
		if (empty % 2 == 1)
		{
			left++;//统计多余的空瓶子
		}
		empty /= 2;
		count += empty;
	}
	if ((empty + left) % 2 == 0)
	{
		count += (empty + left) / 2;
	}
	printf("%d\n", count);

	return 0;
}


int main1()
{

	//ceil()函数是小数向上取整的函数
	//double ceil(double x);

	int n, h, m;//n盒没有打开的酸奶  每h分钟喝一盒 m分钟后还有多少盒没有开
	scanf("%d %d %d", &n, &h, &m);// 8 5 16
	int left = 0;//剩下的酸奶          4
	double ret = ceil((double)m / h);//喝了多少盒  //向上取整
	left = n - (int)ret;
	printf("%d\n", left);
	return 0;
}