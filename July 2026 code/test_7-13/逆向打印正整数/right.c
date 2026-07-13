#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	printf("请输入一个整数:");
	scanf("%d", &num);
	while (num > 0)
	{
		printf("%d", num % 10);//求出最后一位
		num = num / 10;//去掉最后一位

	}
	
}