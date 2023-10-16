#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////1、利用指针int cal(int *array,int n) 的函数求出长度为 n 的数组的和。
//int cal(int* array, int n)
//{
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        sum += (*array);
//        array++;
//    }
//    return sum;
//}
//int main()
//{
//    int i = 0;
//    int n; int array[100]=0;
//    printf("请输入n的值\n");
//    scanf("%d", &n);
//    do
//    {
//        scanf("%d", &array[i]);
//        i++;
//    } while (i < n);
//    int ret = cal(array, n);
//    printf("%d\n", ret);
//    return 0;
//}
//2、牛牛试图给一个长度为 n 整数数组排序，即实现一个 void sort(int *array,int n)
//void sort(int* arr, int n)
//{
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n-i-1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int t = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = t;
//            }
//        }
//    }
//}
//int main()
//{
//	int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    int i = 0;
//    do
//    {
//        scanf("%d", &arr[i]);
//        i++;
//    } while (i < n);
//    for (int j = 0; j < n; j++)
//    {
//        printf("%d ", arr[j]);
//    }
//    sort(arr, n);
//    printf("\n");
//    for (int j = 0; j < n; j++)
//    {
//        printf("%d ", arr[j]);
//    }
//	return 0;
//}
//
#include <stdio.h>
int max3(int x, int y, int z)
{
    int max = x;
    if (y > max)
    {
        max = y;
    }
    if (z > max)
    {
        max = z;
    }
    return max;
}
int main()
{
    int a, b, c;
    float m;
    scanf("%d %d %d", &a, &b, &c);
    m = (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
    printf("%.2f", m);
    return 0;
}