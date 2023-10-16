#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//编程题1、输入大写字母，转换成小写字母，多组输入
//int main()
//{
//    char ch;
//    while (scanf("%c", &ch) != EOF)
//    {
//        getchar();//把缓存区的\n拿走
//        ch = ch + 32;
//        putchar(ch);
//        printf("\n");
//    }
//    return 0;
//}
//2、不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算。
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int ret = 2 << (n-1);
//    printf("%d", ret);
//    return 0;
//}
//3、输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    float max = 0;
//    float min = 101.0;
//    float sum = 0;
//    float average = 0;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        float grades;
//        scanf("%f", &grades);
//        sum += grades;
//        if (grades > max)
//        {
//            max = grades;
//        }
//        if (grades < min)
//        {
//            min = grades;
//        }
//    }
//    average = sum / n;
//    printf("%.2f %.2f %.2f", max, min, average);
//    return 0;
//}
//4、气象意义上，通常以3～5月为春季(spring)，6～8月为夏季(summer)，9～11月为秋季(autumn)，12月～来年2月为冬季(winter)。请根据输入的年份以及月份，输出对应的季节。
//#include<stdio.h>
//int main()
//{
//    int year = 0;
//    scanf("%d", &year);
//    switch (year % 100)
//    {
//    case 3:
//    case 4:
//    case 5:
//        printf("春季\n");
//        break;
//    case 6:
//    case 7:
//    case 8:
//        printf("夏季\n");
//        break;
//    case 9:
//    case 10:
//    case 11:
//        printf("秋季\n");
//        break;
//    case 12:
//    case 1:
//    case 2:
//        printf("冬季\n");
//        break;
//    }
//    return 0;
//}
//5 、小乐乐获得4个最大数，请帮他编程找到最大的数
//#include <stdio.h>
//int main()
//{
//    int max = 0;
//    int num = 0;
//    while (scanf("%d", &num) != EOF)
//    {
//        if (num > max)
//        {
//            max = num;
//        }
//    }
//    printf("%d\n", max);
//    return 0;
//}

//6、输入一个字符判断它是不是字母
//#include <stdio.h>
int main()
{
    char c;
    while (scanf("%c", &c) != EOF)
    {
        getchar();//清除\n
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
        {
            printf("%c is an alphabet.\n", c);
        }
        else
        {
            printf("%c is not an alphabet.\n", c);
        }
    }
    return 0;
}
//7、输入10个整数，分别统计输出正数、负数的个数
//#include <stdio.h>
//int main()
//{
//    int positive = 0;
//    int negative = 0;
//    int num;
//    while (scanf("%d", &num) != EOF)
//    {
//        if (num > 0)
//        {
//            positive++;
//        }
//        else if (num < 0)
//        {
//            negative++;
//        }
//    }
//    printf("positive:%d\n", positive);
//    printf("negative:%d\n", negative);
//    return 0;
//}
