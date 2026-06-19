#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c = 0;
	puts("请输入三个整数。");
	printf("整数1:"); scanf("%d", &a);
	printf("整数2:"); scanf("%d", &b);
	printf("整数3:"); scanf("%d", &c);
	printf("它们的和是%d。\n", a + b + c);

	return 0;
}