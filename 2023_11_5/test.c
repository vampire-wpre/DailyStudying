#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//a = a ^ b;
//b = a ^ b;
//a = a ^ b;



//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ:a= %d b= %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������:a = %d b = %d\n", a, b);
//	return 0;
//}
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
void Fun1(int n)//����λ
{
	//23
	//00010101
	printf("����λ\n");
	for (int i = 0; i < 32; i += 2)
	{
		int ret = 0;
		ret = (n >> i) & 1;
		printf("%d ", ret);
	}

}
void Fun2(int n)//ż��λ
{
	//100
	//01100100
	printf("ż��λ\n");
	for (int i = 1; i < 32; i += 2)
	{
		int ret = 0;
		ret = (n >> i) & 1;
		printf("%d ", ret);
	}

}


void Printbit(int num)
{
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");

	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}


int main()
{
	//�Ӷ����������ұ������ӡ��
	int n = 0;
	scanf("%d", &n);
	//Fun1(n);
	//printf("\n");
	//Fun2(n);
	Printbit(n);
	return 0;
}

//
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//
//�������� :
//
//1999  011111001111
//2299  100011111011
//
//������� : 7

//int CountBits(int a,int b)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) != ((b >> i) & 1))
//		{
//			count++;
//		}
//	}
//
//	a& (a - 1);
//	
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int  ret = CountBits(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}
