#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	puts("请输入两个整数。");
	printf("整数1:"); scanf("%d", &a);
	printf("整数2:"); scanf("%d", &b);
	printf("a是b的%lf%%", (double)a / b*100);//运算逻辑：把其中一个变量变成浮点型，防止精度丢失
	
	return 0;
}