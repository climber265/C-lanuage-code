#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	printf("请输入一个整数:");
	scanf("%d", &n);
	if (n >= 0)//只有输入非负数才能进入判断
	{
		while (n >= 0)
		{
			printf("%d ", n);
			n--;

		}
		printf("\n");
	}
	return 0;
}