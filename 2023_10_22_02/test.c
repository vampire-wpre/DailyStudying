#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
//continue ����continue����Ĵ��룬ֱ�ӽ�����һ��ѭ��
//for ѭ�� ��ʼ���������ж�������ѭ��������������������ʡ�ԣ�����ж�����ʡ���ˣ���ʾ�ж�������Ϊ�棬��ö���Ҫʡ��


//��ӡ100~200֮�������
int main()
{

	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		int flag = 1;//flag=1����ʾ����������
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)//
			{
				flag = 0;//flag=0��ʾ��������
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}



//��������Ϸ
//rand�������������(α�����)����Ϊ���������������1������rand֮ǰ�ȵ���srand��������������ӣ�ֻ��Ҫ����һ�ξ���
//��������ӿ�����time�����ķ���ֵ
//time�������ص���ʱ���
void menue()
{
	printf("*******************************\n");
	printf("*******************************\n");
	printf("******** 1.play 0.exit ********\n");
	printf("*******************************\n");
	printf("*******************************\n");
}

void game()
{
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	int guess = 0;
	while (1)
	{
		printf("��������²������\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			Sleep(1000);
			//system("cls");//��Ϸ����������
			break;
		}
	}

}

int main()
{
	//1���˵���ӡ
	int num = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menue();
		printf("��ѡ��:\n");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (num);

	return 0;
}