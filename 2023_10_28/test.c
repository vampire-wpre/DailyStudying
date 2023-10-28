#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    char ch;
//    while (scanf("%c", &ch) != EOF)
//    {
//        for (i = 1; i <= 5; i++)
//        {
//            for (j = 0; j <= 4 - i; j++)
//            {
//                printf(" ");
//            }
//            for (k = 0; k < i; k++)
//            {
//                printf("%c ", ch);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
// 
// 
//int main()
//{
//	char arr[12] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//	//20130225
//	//2013|02|25
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year,&month,&date);
//	printf("year=%4d\nmonth=%02d\ndate=%02d\n", year, month, date);
//	//%02d左边自动补0，如month为2时输出02
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n == 0)
//		{
//			printf("%d\n", 1);
//		}
//		else
//		{
//			printf("%d\n", 1 << (n));
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    int sum = 0;
//    scanf("%d %d", &a, &b);
//    if (a >= 100)
//    {
//        a = a % 100;
//    }
//    if (b >= 100)
//    {
//        b = b % 100;
//    }
//    sum = a + b;
//    if (sum >= 100)
//    {
//        printf("%d\n", sum % 100);
//    }
//    else {
//        printf("%d\n", sum);
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int t, s;
//    scanf("%d %d", &t, &s);
//    float s1 = ((float)s) / 100;
//    float bmi = t / (s1 * s1);
//    printf("%.2f", bmi);
//    return 0;
//}
//#include <stdio.h>
//#define pai 3.1415926
//
//int main()
//{
//    float r;
//    scanf("%f", &r);//输入半径r
//    float V;//体积
//    V = (4.0 / 3.0) * pai * r * r * r;
//    printf("%.3f", V);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//    //比较两个整型值的
//    return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);
//    for (int j = n - 1; j >= n - 5; j--)
//    {
//        printf("%d ", arr[j]);
//    }
//    return 0;
//}
//// qsort(arr, sz, sizeof(arr[0]), cmp_int);





//#include<stdio.h>
//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//        getchar();
//        if (ch >= 'a' && ch <= 'z')//如果是小写字母   大写字母+32=小写字母
//        {
//            printf("%c\n", ch - 32);
//        }
//        else 
//        {
//            printf("%c\n", ch + 32);
//        }
//    }
//    return 0;
//}