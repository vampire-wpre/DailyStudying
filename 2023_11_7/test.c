#define  _CRT_SECURE_NO_WARNINGS 1
//
//int main()
//{
//    int N, M;
//    int sum = 0;
//    scanf("%d %d", &N, &M);
//    int arr[N][M];
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < M; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > 0)
//            {
//                sum += arr[i][j];
//            }
//        }
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n, m;
//    int x, y;
//    scanf("%d %d", &n, &m);
//    int arr[n][m];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    scanf("%d %d", &x, &y);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (i == x - 1 && j == y - 1)
//                printf("%d ", arr[x - 1][y - 1]);
//        }
//    }
//    return 0;
//}


//void BubbleSort(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)//
//	{
//		for (int j = 0; j < sz-i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,39,99,87,13,76,77,33,44,22 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//struct Stu
//{
//	int age;
//	char name[10];
//};
//struct Data
//{
//	struct Stu ss;
//	int a;
//	int b;
//};
//int main()
//{
//	struct Stu S1 = { 10,"zhangsan" };
//	struct Stu S2 = { .name = "lisi",.age = 11 };
//	return 0;
//}

//int main()
//{
//	char c1 = 125;
//	char c2 = 20;
//	char c3 = c1 + c2;
//	printf("%d\n", c3);
//	return 0;
//}
//int main()
//{
//
//
//	int a = 111;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	return 0;
//}

//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))//i(-1)转换成unsigned int是一个很大的数，大于sizeof(i)
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//
// 
// 
// 
//在一个整型数组中，只有一个数字出现一次，其他数组都是成对出现的，请找出那个只出现一次的数字。
//
//例如：
//
//数组中有：1 2 3 4 5 1 2 3 4，只有5出现一次，其他数字都出现2次，找出5


//int Fun(int arr[], int sz)
//{
//	int x = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		x = x ^ arr[i];
//	}
//	//^运算的性质：
//	//N^0=N
//	//N^N=0;
//	//a^b=b^a
//	//(a^b)^c=a^(b^c)
//	//出现两次数，一定会变成0而出现一次的数会保留
//	return x;
//}
//int main()
//{
//	int arr[11] = { 1, 2, 3, 4 ,5, 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Fun(arr,sz);
//	printf("%d\n", ret);
//	return 0;
//}