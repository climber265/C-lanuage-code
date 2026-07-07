#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	printf("请输入一个整数:");
	scanf("%d", &n);
	while (n >= 0)
	{
		printf("%d ", n);
		n--;
	}

	return 0;
}