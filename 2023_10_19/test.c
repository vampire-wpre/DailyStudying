#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
//int main()
//{
//	//srand((unsigned int)time(NULL));//ʹ��rand����֮ǰ��ʱ�������Ϊ��������ӣ���randΪ�����
//	//printf("%d\n", rand());//ʹ��rand���������
//	//���� m--n�������
//	//rand()%(n-m+1)+n
//	srand((unsigned int)time(NULL))
//	printf("%d", rand() % 100 + 1);//����1-100
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;//b = c++��һ����䣬c++����һ����䣬��һ�д��벻�Ƕ��ű��ʽ
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
int main()
{
	int a; int i = 0;
	while (scanf("%d", &a)!=EOF)
	{
		
		for (i = 0; i < a; i++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}