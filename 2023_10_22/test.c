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
// 1+1/（1-3）+1/（1-3+5）+...+1/(1-3+5-...((-1)^(n-1))*(2n-1))的值
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
// 计算 1+（1+2）+（1+2+3）+...+(1+2+3+...+n)
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

//求一个整数的所有数位之和
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

//有一个数字魔法，给你一个正整数n，如果n为偶数，就将他变为n/2, 如果n为奇数，就将他变为乘3加1
//不断重复这样的运算，经过有限步之后，一定可以得到1
//牛牛为了验证这个魔法，决定用一个整数来计算几步能变成1
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

//小乐乐的班主任想统计一下班级里一共有多少人需要被请家长，三个成绩（语文，数学，外语）平均分低于60的将被请家长，
//小乐乐想编程帮助班主任算一下有多少同学被叫家长。
// 输入描述
// 共n+1行
//第一行，输入一个数n，代表小乐乐的班级中有n个同学。
//在接下来的n行中每行输入三个整数代表班级中一个同学的三科成绩（语文，数学，外语），用空格分隔。
// 输出描述：
//一行，一个整数，代表班级中需要被请家长的人数。
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
//将一个四位数，反向输出。
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