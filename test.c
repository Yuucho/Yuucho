#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };//����һ��11*11������
	char show[ROWS][COLS] = { 0 };//
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//�������׵�����
	setmine(mine, ROW, COL);
	//��ӡ����
	Printboard(mine, ROW, COL);//��Ҳ��ܿ��������ڲ��ԣ�Ҳ�����������ס�������
	Printboard(show, ROW, COL);//����ܿ���������
	//����
	showmine(mine, show, ROW, COL);
}
void menu()
{
	printf("****** �˵� *****\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ���˳�>>>\n");
			break;
		default:
			printf("ѡ�����������ѡ��:>\n");
			break;
		}
	} while (input);
}