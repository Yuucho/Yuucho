#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("�������ͻ�����Ϸ������ô��ģ�������룺���Ժ�һ���ú�ѧϰ����ȡ���ػ�!\n������:>");
		scanf("%s", input);
		if (0 == strcmp(input, "���Ժ�һ���ú�ѧϰ"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}