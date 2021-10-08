#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };//建立一个11*11的棋盘
	char show[ROWS][COLS] = { 0 };//
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//建立有雷的棋盘
	setmine(mine, ROW, COL);
	//打印棋盘
	Printboard(mine, ROW, COL);//玩家不能看到仅用于测试，也可以用来作弊。。。。
	Printboard(show, ROW, COL);//玩家能看到的棋盘
	//排雷
	showmine(mine, show, ROW, COL);
}
void menu()
{
	printf("****** 菜单 *****\n");
	printf("***** 1.play ****\n");
	printf("***** 0.exit ****\n");
}
int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏已退出>>>\n");
			break;
		default:
			printf("选择错误，请重新选择:>\n");
			break;
		}
	} while (input);
}