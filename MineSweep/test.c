#include"Mine.h"


void game()
{
	char mine[LINES][LINES];//�׵�����
	char map[LINES][LINES];//��ͼ
	Init(mine, LINES, LISTS, '0');//��ʼ����Ϊȫ'0'
	Init(map, LINES, LISTS,'*');//��ʼ����ͼΪȫ'*'
	//Print(mine, LINE, LIST);
	//Print(map, LINE, LIST);
	SetMine(mine,LINE,LIST);//������
	Print(map, LINE, LIST);
	//����
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
		printf("��ѡ��:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}