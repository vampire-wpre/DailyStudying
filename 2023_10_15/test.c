#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����1�������д��ĸ��ת����Сд��ĸ����������
//int main()
//{
//    char ch;
//    while (scanf("%c", &ch) != EOF)
//    {
//        getchar();//�ѻ�������\n����
//        ch = ch + 32;
//        putchar(ch);
//        printf("\n");
//    }
//    return 0;
//}
//2����ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨<<��ʵ��2��n�η��ļ��㡣
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int ret = 2 << (n-1);
//    printf("%d", ret);
//    return 0;
//}
//3������n�Ƴɼ�����������ʾ����ͳ�����е���߷֣���ͷ��Լ�ƽ���֡�
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
//4�����������ϣ�ͨ����3��5��Ϊ����(spring)��6��8��Ϊ�ļ�(summer)��9��11��Ϊ�＾(autumn)��12�¡�����2��Ϊ����(winter)����������������Լ��·ݣ������Ӧ�ļ��ڡ�
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
//        printf("����\n");
//        break;
//    case 6:
//    case 7:
//    case 8:
//        printf("�ļ�\n");
//        break;
//    case 9:
//    case 10:
//    case 11:
//        printf("�＾\n");
//        break;
//    case 12:
//    case 1:
//    case 2:
//        printf("����\n");
//        break;
//    }
//    return 0;
//}
//5 ��С���ֻ��4������������������ҵ�������
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

//6������һ���ַ��ж����ǲ�����ĸ
//#include <stdio.h>
int main()
{
    char c;
    while (scanf("%c", &c) != EOF)
    {
        getchar();//���\n
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
//7������10���������ֱ�ͳ����������������ĸ���
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
