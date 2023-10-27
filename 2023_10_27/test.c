#define  _CRT_SECURE_NO_WARNINGS 1
//Print()//函数不写返回值，默认返回int类型
//{
//	printf("***********\n");
//}
//int main()
//{
//	int n = 0;
//	int ret = Print();
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	void set_arr(int arr1[5], int sz1);
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr, sz);
//	return 0;
//}
////函数在使用之前声明就行了
//void set_arr(int arr1[5], int sz1)
//{
//	for (int i = 0; i < sz1; i++)
//	{
//		arr1[i] = -1;
//	}
//}


//在C语言中，函数的形参一般都是通过参数压栈的方式传递的


//9、实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

//#include<stdio.h>
//void Print_(n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print_(n);
//	return 0;
//}


//10、实现函数判断year是不是润年
//
//#include<stdio.h>
//int is_leapyear(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leapyear(year);
//	if (ret == 1)//是闰年返回1
//	{
//		printf("%d年是闰年\n",year);
//	}
//	else
//	{
//		printf("%d年不是闰年\n",year);
//	}
//	return 0;
//}




//实现一个函数is_prime，判断一个数是不是素数。
//利用上面实现的is_prime函数，打印100到200之间的素数。
//#include<stdio.h>
//int is_prime(int n)
//{
//	int i = 0;
//	int flag = 1;//假设是素数
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_prime(i))//is_prime返回值是1表示是素数
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}



//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值
#include<stdio.h>
void init(int* ps, int sz)//初始化数组为全0
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		*ps = 0;
		ps++;
	}
}

void print(int arr[], int sz)//打印数组每个元素
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void reverse(int arr[], int sz)//逆置数组
{

	int left = 0;//左下标
	int right = sz - 1;//右下标
	while (right >= left)
	{
		//交换
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}





int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//假设arr数组一开始里面存的是随机值
	int sz = sizeof(arr) / sizeof(arr[0]);

	//init(arr,sz);//初始化数组为全0
	//printf("初始化后的数组为:\n");
	//print(arr,sz);//打印数组每个元素
	//printf("\n");
	//reverse(arr, sz);
	//printf("逆置后的数组为:\n");
	//print(arr, sz);
	printf("逆置前的数组为:\n");
	print(arr, sz);
	printf("\n");
	reverse(arr, sz);
	printf("逆置后数组为:\n");
	print(arr, sz);
	printf("\n");
	return 0;
}