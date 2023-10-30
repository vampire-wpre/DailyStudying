#include"Mine.h"


void menue()
{
	printf("##########################\n");
	printf("###1. play            ####\n");
	printf("###0. exit            ####\n");
	printf("##########################\n");
}




void Init(char arr[LINES][LINES], int line, int list, char set)//��ʼ��
{
	int i = 0;
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < list; j++)
		{
			arr[i][j] = set;
		}
	}
}
void Print(char arr[LINES][LINES], int line, int list)
{
	printf("-------ɨ��---------\n");
	for (int k = 0; k <= line; k++)
	{
		printf("%d ",k);
	}
	printf("\n");
	for (int i = 1; i <= line; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= list; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("-------ɨ��---------\n");
}
void SetMine(char arr[LINES][LISTS], int line, int list)//������
{

	int count = EasyCount;//����10����
	while (count)
	{
		int x = rand() % line + 1;
		int y = rand() % list + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}

void FindMine(char mine[LINES][LISTS], char map[LINES][LISTS],int line,int list)//�Ų���
{
	int x, y;
	int win = 0;
	while (win< line * list-EasyCount)//�Ų������в����׵�������Ӯ��
	{
		//Print(mine, line, list);
		printf("��������Ҫ�Ų������:\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= line && y >= 1 && y <= list)
		{
			if (mine[x][y] == '1')//�������
			{
				printf("��Ǹ���㱻ը����\n");
				Sleep(1000);
				system("cls");
				break;
			}
			else//�����ף���ʾ���������Χ�м�����
			{
				int n = CountMine(mine,x,y);//nΪ�׵ĸ���
				map[x][y] = n + '0';
				//'0'-'0'=0
				//'1'-'0'=1
				win++;
				system("cls");
				Print(map, line, list);
			}
		}
		else
		{
			printf("��������ȷ������\n");
		}
	}
	if (win == line * list - EasyCount)
	{
		printf("��ϲ���ҵ������е���\n");
		Print(map, line, list);
	}
}
int CountMine(char mine[LINES][LINES], int x, int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x+1][y]+
		mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');
}