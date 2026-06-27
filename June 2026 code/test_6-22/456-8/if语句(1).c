#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B;
	puts("请输入两个整数。");
	printf("整数A:"); scanf("%d", &A);
	printf("整数B:"); scanf("%d", &B);
	if (B == 0)
	{
		printf("输出错误\n");
		return 0;
	}
		

	if (A % B == 0)
		printf("B是A的约数。\n");//如果A能整除B，那么B是A的约数。
	else
		printf("B不是A的约数。\n");

	return 0;
}