#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;//n为输入数字个数
	int i = 1;//i为循环变量
	printf("请输入一个整数:");
	scanf("%d", &n);
	if (n >= 0)//负数直接无法打印换行符，直接跳过循环；0也打印不了
	{
		while (i <= n)
		{
			putchar('*');
			putchar('\n');
			i++;
		}
	}
	return 0;
}
