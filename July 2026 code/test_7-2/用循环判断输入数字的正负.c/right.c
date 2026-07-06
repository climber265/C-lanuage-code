#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	do
	{
		printf("请输入一个整数:");
		scanf("%d", &n);
		if (n > 0)
		{
			printf("正数\n");
		}
		else if (n < 0)
		{
			printf("负数\n");
		}
		else
			printf("是0\n");
	} while (n >= 0);

	return 0;
}