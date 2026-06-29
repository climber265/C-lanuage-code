#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2, difference;
	printf("请输入两个整数:");
	scanf("%d %d", &n1, &n2);
	if (n1 > n2)
	{
		difference = n1 - n2;
		printf("差值是%d。\n", difference);
	}
	else if (n1 < n2)
	{
		difference = n2 - n1;
		printf("差值是%d。\n", difference);
	}
	else
	{
		difference = 0;
		printf("差值是0。\n");
	}
	return 0;
}