#include<stdio.h>
//���⼯
//1����д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//�ҵ�����
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		//if (i == 9 || i % 10 == 9 || i / 10 == 9)
		//{
		//	count++;
		//}
		if (i % 10 == 9)
		{

			count++;
		}
		else if(i/10==9)
		{
			count++;
		}
	}
	printf("%d\n", count);//������Ϊ19
	return 0;
}


//��ȷ��
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);//������20
//	return 0;
//}