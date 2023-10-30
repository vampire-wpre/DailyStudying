#include"Mine.h"


void menue()
{
	printf("##########################\n");
	printf("###1. play            ####\n");
	printf("###0. exit            ####\n");
	printf("##########################\n");
}




void Init(char arr[LINES][LINES], int line, int list, char set)//初始化
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
	printf("-------扫雷---------\n");
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
	printf("-------扫雷---------\n");
}
void SetMine(char arr[LINES][LISTS], int line, int list)//设置雷
{

	int count = EasyCount;//设置10个雷
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

void FindMine(char mine[LINES][LISTS], char map[LINES][LISTS],int line,int list)//排查雷
{
	int x, y;
	int win = 0;
	while (win< line * list-EasyCount)//排查完所有不是雷的坐标后就赢了
	{
		//Print(mine, line, list);
		printf("请输入你要排查的坐标:\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= line && y >= 1 && y <= list)
		{
			if (mine[x][y] == '1')//如果是雷
			{
				printf("抱歉，你被炸死了\n");
				Sleep(1000);
				system("cls");
				break;
			}
			else//不是雷，显示这个坐标周围有几个雷
			{
				int n = CountMine(mine,x,y);//n为雷的个数
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
			printf("请输入正确的坐标\n");
		}
	}
	if (win == line * list - EasyCount)
	{
		printf("恭喜您找到了所有的雷\n");
		Print(map, line, list);
	}
}
int CountMine(char mine[LINES][LINES], int x, int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x+1][y]+
		mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');
}