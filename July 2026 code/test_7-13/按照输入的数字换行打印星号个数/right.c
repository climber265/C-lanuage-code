#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;//你输入的整数
	int i = 1;//循环变量
	printf("请输入一个整数:");
	scanf("%d", &n);
	if (n >= 0)
	{
		while (i <= n)
		{
			putchar('*');
			putchar('\n');//打印完一个*，输出一个换行符，一个*只占一行
			i++;//循环完自增1，防止死循环
		}
	}

	return 0;

}