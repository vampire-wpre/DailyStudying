#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


//��쳲���������
//int Fun1(int n)//�ݹ�
//{
//	if (n == 1||n==2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fun1(n - 1) + Fun1(n - 2);
//	}
//}
//
//int Fun2(int n)//�ǵݹ�
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n-2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main1()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret1 = Fun1(n);//�ݹ�
//	int ret2 = Fun2(n);//�ǵݹ�
//	printf("�ݹ飺ret1=%d\n", ret1);
//	printf("�ǵݹ飺ret2=%d\n", ret2);
//	return 0;
//}
//
//
//
////�ݹ�ʵ��n��k�η�
//float Fun(float n, int k)
//{
//	//2^3
//	//2*2*2
//	if (k == 1)
//	{
//		return n;
//	}
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	if (k > 0)
//	{
//		return n*Fun(n, k - 1);
//	}
//	if (k < 0)
//	{
//		//k=-3
//		return 1.0/(n * Fun(n, (0 - k) - 1));
//	}
//}
//int main2()
//{
//	float n = 0;
//	int k = 0;
//	scanf("%f %d", &n,&k);
//	float ret = Fun(n,k);
//	printf("%f\n", ret);
//	return 0;
//}
//
//
////����һ������ÿλ֮��
//
//int DigitSum(int n)
//{
//
//	if (n == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//
//}
//int main3()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
//
//
////��n�Ľ׳ˣ��ǵݹ�͵ݹ�
//
//
//int Fun1(int n)//�ǵݹ�
//{
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//
//}
//int Fun2(int n)//�ݹ�
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fun2(n - 1);
//	}
//
//}
//int main4()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	int ret1 = Fun1(n);
//	int ret2 = Fun2(n);
//	printf("�ǵݹ�%d�Ľ׳�%d\n",n, ret1);
//	printf("�ݹ�%d�Ľ׳�%d\n", n,ret2);
//}

void Fun(int n)
{
	//1234
	//1 2 3 4
	//Fun(1234)=Fun(123)+Fun(4)
	//         =Fun(12)+Fun(3)+Fun(4)
	if (n / 10 == 0)
	{
		printf("%d ", n);
	}
	else
	{
		Fun(n / 10);
		printf("%d ", n % 10);
	}

}

int main()
{

	int n = 0;
	scanf("%d", &n);
	Fun(n);

	return 0;
}