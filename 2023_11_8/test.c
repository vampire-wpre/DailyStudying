#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))//隐式类型转换i=-1，转换成unsigned int变成一个很大的数
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int m, n;
//    int count = 0;
//    scanf("%d %d", &m, &n);
//    int arr1[m][n];
//    int arr2[m][n];
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    float ret = 0;
//    ret = (float)count / (m * n);
//    printf("%.2f\n", 100 * ret);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char s1[100];
//    char s2[100];
//    char s = 0;
//    while (scanf("%s%c%s", s1, &s, s2) != EOF)
//    {
//        if (strcmp(s1, s2) == 0)
//        {
//            printf("Login Success!\n");
//        }
//        else
//        {
//            printf("Login Fail!\n");
//        }
//    }
//    return 0;
//}
//
//#include<stdio.h>
//void Fun1(int a)
//{
//	a = 20;
//}
//void Fun2(int *pa)
//{
//	*pa = 20;
//}
//int main()
//{
//	int a = 10;
//	Fun1(a);
//	printf("%d\n", a);
//	Fun2(&a);
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	//
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int ret = 1;
//	for (int i = 1;i<=n;i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", ret);
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int count = 0;
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int x = 0;
//    scanf("%d", &x);
//    for (int i = 0; i < n; i++)
//    {
//        if (x == arr[i])
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int a, b, c, d;
//    float sum = 0;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    sum = a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5;
//    printf("%.1f\n", sum);
//    return 0;
//}