#include"Mine.h"


void game()
{
	char mine[LINES][LINES];//雷的数组
	char map[LINES][LINES];//地图
	Init(mine, LINES, LISTS, '0');//初始化雷为全'0'
	Init(map, LINES, LISTS,'*');//初始化地图为全'*'
	//Print(mine, LINE, LIST);
	//Print(map, LINE, LIST);
	SetMine(mine,LINE,LIST);//设置雷
	Print(map, LINE, LIST);
	//排雷
	FindMine(mine,map,LINE,LIST);

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menue();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}