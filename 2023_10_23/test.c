#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//1、打印用“*”组成的正方形图案。
//输入：
//4
//复制
//输出：
//* * * *
//* * * *
//* * * *
//* * * *
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                printf("* ");
//
//            }
//            printf("\n");
//        }
//    }
//	return 0;
//}
// 
// 
//2、
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//3、
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = n; j >i ; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
// 3、
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 0; j < n-i; j++)
//            {
//                printf(" ");
//            }
//            for (int k = 0; k < i; k++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//    *
//   **
//  ***
// ****
//*****
// 


//5、
//int main()
//{
//
//	return 0;
//}
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 0; j < n - i; j++)
//            {
//                printf(" ");
//            }
//            for (int k = 0; k < i; k++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main() 
//{
//    //while (1)
//    //{
//    //    printf("hehe\n");
//    //}
//    //for (;;)
//    //{
//    //    printf("haha\n");
//    //}
//    //上面两个的功能是一样的，都是死循环
//    return 0;
//}
//#define ADD(x)  x*x
////ADD(a+b)  =a+b*a+b*c=4+24+42
//
//int main()
//{
//	int a = 4;
//	int b = 6;
//	int c = 7;
//	int d = ADD(a + b) * c;
//
//	printf("d=%d", d);
//}
// 
// 
// 
// 
//1. 结构体的第?个成员对?到和结构体变量起始位置偏移量为0的地址处
//2. 其他成员变量要对?到某个数字（对?数）的整数倍的地址处。
//对?数 = 编译器默认的?个对?数 与 该成员变量??的较?值。
//VS 中默认的值为 8
//3.结构体总??为最?对?数（结构体中每个成员变量都有?个对?数，所有对?数中最?的）的
//整数倍。
//4.如果嵌套了结构体的情况，嵌套的结构体成员对?到??的成员中最?对?数的整数倍处，结构
//体的整体??就是所有最?对?数（含嵌套结构体中成员的对?数）的整数倍
// 
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//	return 0;
//}