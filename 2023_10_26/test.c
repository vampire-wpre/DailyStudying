#define  _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n)!=EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == j || i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i == 0 || i == n - 1 || j == 0 || j == n-1)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int n, m;//arr[n][m]2 3
//	scanf("%d %d", &n, &m);
//	int arr1[n][m];
//	int arr2[m][n];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr2[i][j] = arr1[j][i];
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//	int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int B[10] = { 11,22,33,44,55,66,77,88,99,100 };
//	int tmp = 0;
//	printf("交换前数组A为：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	printf("交换前数组B为：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//	printf("交换后数组A为：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	printf("交换后数组B为：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//    int n, m;
//    int arr[1000];
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int j = n; j < m + n; j++)
//    {
//        scanf("%d", &arr[j]);
//    }
//    qsort(arr, m + n, sizeof(arr[0]), cmp_int);
//    for (int k = 0; k < m + n; k++)
//    {
//        printf("%d ", arr[k]);
//    }
//    return 0;
//}