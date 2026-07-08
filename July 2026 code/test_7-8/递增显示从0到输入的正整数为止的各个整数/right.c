#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n=0;//你输入的上限数
	int i=0;//你每次循环打印的数
	printf("请输入一个整数:");
	scanf("%d", &n);
	while (i <= n)//当i小于你给的上限数时，持续循环
	{
		printf("%d ", i);
		i++;
		
	}

	return 0;
}


//变量i的值最终等于13！！ 一共循环13次