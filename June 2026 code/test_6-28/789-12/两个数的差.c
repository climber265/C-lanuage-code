#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2;
	printf("请输入两个整数：");
	scanf("%d %d", &n1, &n2);
	if ((n1 - n2) < 10 || (n1 - n2) == 10)
	{
		printf("它们的差小于等于10。\n");
	}
	else
		printf("它们的差大于等于11。\n");
}