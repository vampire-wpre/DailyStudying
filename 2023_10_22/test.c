#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//1-2+3-4......
//	int n = 0;
//	int sum1 = 0; //ji
//	int sum2 = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 2 != 0)
//		{
//			sum1 += i;
//		}
//		if (i % 2 == 0)
//		{
//			sum2 += i;
//		}
//	}
//	sum = sum1 - sum2;
//	printf("%d", sum);
//	return 0;
//}
// 1+1/��1-3��+1/��1-3+5��+...+1/(1-3+5-...((-1)^(n-1))*(2n-1))��ֵ
// 1- 1/2 + 1/3 -1/4 +
//int main()
//{
//	int n = 0;
//	double j = 0;
//	double o = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 2 != 0)//j
//		{
//			j += 1.0 / i;
//		}
//		if (i % 2 == 0)
//		{
//			o += 1.0 / i;
//		}
//	}
//	printf("%.3lf\n", j - o);
//	return 0;
//}
// 
// 
// ���� 1+��1+2��+��1+2+3��+...+(1+2+3+...+n)
//#include <stdio.h>
//int fun(int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return (n * (1 + n)) / 2;
//    }
//}
//int main()
//{
//    int n = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    int ret = fun(n);
//    for (int i = 1; i <= n; i++)
//    {
//        sum += fun(i);
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//��һ��������������λ֮��
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        sum += n % 10;
//        n /= 10;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//��һ������ħ��������һ��������n�����nΪż�����ͽ�����Ϊn/2, ���nΪ�������ͽ�����Ϊ��3��1
//�����ظ����������㣬�������޲�֮��һ�����Եõ�1
//ţţΪ����֤���ħ����������һ�����������㼸���ܱ��1
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int count = 0;
//    scanf("%d", &n);
//    while (n != 1)
//    {
//        if (n % 2 == 0)
//        {
//            n /= 2;
//            count++;
//        }
//        else
//        {
//            n = n * 3 + 1;
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}

//С���ֵİ�������ͳ��һ�°༶��һ���ж�������Ҫ����ҳ��������ɼ������ģ���ѧ�����ƽ���ֵ���60�Ľ�����ҳ���
//С�������̰�����������һ���ж���ͬѧ���мҳ���
// ��������
// ��n+1��
//��һ�У�����һ����n������С���ֵİ༶����n��ͬѧ��
//�ڽ�������n����ÿ������������������༶��һ��ͬѧ�����Ƴɼ������ģ���ѧ��������ÿո�ָ���
// ���������
//һ�У�һ������������༶����Ҫ����ҳ���������
//#include <stdio.h>
//int main()
//{
//    int n = 0; int a, b, c;
//    int count = 0;
//    int i = 0;
//    scanf("%d", &n);
//    while (scanf("%d %d %d", &a, &b, &c) != EOF && i < n)
//    {
//        if ((a + b + c) / 3 < 60)
//        {
//            count++;
//        }
//        i++;
//    }
//    printf("%d\n", count);
//    return 0;
//}
//��һ����λ�������������
//int main()
//{
//	int n = 0;//1234
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}