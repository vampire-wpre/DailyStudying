#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//1����ӡ�á�*����ɵ�������ͼ����
//���룺
//4
//����
//�����
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
//2��
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
//3��
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
// 3��
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


//5��
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
//    //���������Ĺ�����һ���ģ�������ѭ��
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
//1. �ṹ��ĵ�?����Ա��?���ͽṹ�������ʼλ��ƫ����Ϊ0�ĵ�ַ��
//2. ������Ա����Ҫ��?��ĳ�����֣���?�������������ĵ�ַ����
//��?�� = ������Ĭ�ϵ�?����?�� �� �ó�Ա����??�Ľ�?ֵ��
//VS ��Ĭ�ϵ�ֵΪ 8
//3.�ṹ����??Ϊ��?��?�����ṹ����ÿ����Ա��������?����?�������ж�?������?�ģ���
//��������
//4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ���Ա��?��??�ĳ�Ա����?��?���������������ṹ
//�������??����������?��?������Ƕ�׽ṹ���г�Ա�Ķ�?������������
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