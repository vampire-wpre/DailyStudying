#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


int main7()
{
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	scanf("%s%s", arr1, arr2);
	if (strcmp(arr1, arr2) == 0)
	{
		printf("same\n");
	}
	else {
		printf("different\n");
	}
	return 0;
}



int main6() {
	int arr[55];
	int N = 0;
	int insert = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);//����N������
	}
	scanf("%d", &insert);//����Ҫ�������
	int* pa = arr;//ָ��arr��ָ��
	while ((insert) >= (*pa))
	{
		pa++;
	}
	//Ų������
	int* left = &arr[N - 1];
	while (left >= pa)
	{
		(*(left + 1)) = (*left);
		left--;
	}
	(*pa) = insert;//��������
	for (int j = 0; j < N + 1; j++)
	{
		printf("%d ", arr[j]);
	}
	return 0;
}






int main5()
{
	int yuwen, shuxue, yyu;
	scanf("%d %d %d", &yuwen, &shuxue, &yyu);
	int max = 0;
	if (shuxue > max)
	{
		max = shuxue;
	}
	if (yyu > max)
	{
		max = yyu;
	}
	if (yuwen > max)
	{
		max = yuwen;
	}
	printf("%d\n", max);
	return 0;
}


//ABBABBAAB0
int main4()
{
	char arr[100] = { 0 };
	gets(arr);
	char* str = arr;
	int countA = 0;
	int countB = 0;
	while (*str)
	{
		if ((*str) == 'A')
		{
			countA++;
		}
		else if ((*str) == 'B')
		{
			countB++;
		}
		str++;
	}
	if (countA > countB)
	{
		printf("A\n");
	}
	else if (countA < countB)
	{
		printf("B\n");
	}
	else {
		printf("E\n");
	}
	return 0;
}






int main3()
{
	int score = 0;
	while (scanf("%d", &score) != EOF)
	{
		switch (score / 10)
		{
		case 9:
		case 10:
			printf("Perfect\n");
			break;
		default:
			break;
		}
	}
	return 0;
}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ
//
//��20ƿ -->20����ƿ��            ��20
//       -->��10ƿ��ˮ(10����ƿ��) ��10
//       -->��5ƿ��ˮ(5����ƿ��)   ��5
//       -->��(5/2)2ƿ��ˮ		��2
//       -->��1ƿ��ˮ				��1


int main2()
{

	int money = 0;//���˶��ٿ�Ǯ
	int empty = 0;//��ƿ�ӵ���Ŀ
	int count = 0;//ͳ���ܺȶ���ƿ
	int left = 0;//ͳ����û�ж���Ŀ�ƿ��
	scanf("%d", &money);//������˶���Ǯ

	empty = money;//һ��ʼ�������е���money����ƿ��
	count = money;//һ��ʼ�ܺ�moneyƿ

	while (empty)
	{
		if (empty % 2 == 1)
		{
			left++;//ͳ�ƶ���Ŀ�ƿ��
		}
		empty /= 2;
		count += empty;
	}
	if ((empty + left) % 2 == 0)
	{
		count += (empty + left) / 2;
	}
	printf("%d\n", count);

	return 0;
}


int main1()
{

	//ceil()������С������ȡ���ĺ���
	//double ceil(double x);

	int n, h, m;//n��û�д򿪵�����  ÿh���Ӻ�һ�� m���Ӻ��ж��ٺ�û�п�
	scanf("%d %d %d", &n, &h, &m);// 8 5 16
	int left = 0;//ʣ�µ�����          4
	double ret = ceil((double)m / h);//���˶��ٺ�  //����ȡ��
	left = n - (int)ret;
	printf("%d\n", left);
	return 0;
}