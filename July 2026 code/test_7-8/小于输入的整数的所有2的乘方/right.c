#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	
	int n = 0;
	int num = 2;
	printf("请输入一个正整数:");
	scanf("%d", &n);
	while (num <n)//如果num小于输入的正整数，就打印继续乘2循环
	{
		printf("%d ", num);
		num = num * 2;//每次乘2，相当于计算乘方
	}

	return 0;
}