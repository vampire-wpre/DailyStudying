#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
//continue 跳过continue后面的代码，直接进入下一次循环
//for 循环 初始化条件、判断条件、循环调整三个条件都可以省略，如果判断条件省略了，表示判断条件恒为真，最好都不要省略


//打印100~200之间的素数
int main()
{

	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		int flag = 1;//flag=1，表示假设是素数
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)//
			{
				flag = 0;//flag=0表示不是素数
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



//猜数字游戏
//rand函数生成随机数(伪随机数)，因为它的随机数种子是1，调用rand之前先调用srand来设置随机数种子，只需要设置一次就行
//随机数种子可以是time函数的返回值
//time函数返回的是时间戳
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
		printf("请输入你猜测的数字\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			Sleep(1000);
			//system("cls");//游戏结束后清屏
			break;
		}
	}

}

int main()
{
	//1、菜单打印
	int num = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menue();
		printf("请选择:\n");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (num);

	return 0;
}