#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};
int main()
{
	int n = 0;
	struct Node* list = NULL;
	struct Node* tail = NULL;
	//输入结点
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int data = 0;
		scanf("%d", &data);
		struct Node *n = (struct Node*)malloc(sizeof(struct Node));
		n->data = data;
		n->next = NULL;
		if (list == NULL)
		{
			list = n;
			tail = list;
		}
		else
		{
			tail->next = n;
			tail = tail->next;
		}
	}
	//删除结点
	int del = 0;
	scanf("%d", &del);
	struct Node *cur = list;
	struct Node *prev = NULL;
	while (cur)
	{
		//找到了
		if (cur->data == del)
		{
			struct Node* pd = cur;
			//如果删除的是第一个结点
			if (cur == list)
			{
				list = list->next;
				cur = list;
			}
			else
			{
				//删除的不是第一个结点
				prev->next = cur->next;
				cur = prev->next;
			}
			n--;
			free(pd);
		}
		else//找不到
		{
			prev = cur;
			cur = cur->next;
		}
	}
	cur = list;
	printf("%d\n", n);
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	//释放空间
	cur = list;
	while (cur)
	{
		del = cur;
		cur = cur->next;
		free(del);
	}
	return 0;
}