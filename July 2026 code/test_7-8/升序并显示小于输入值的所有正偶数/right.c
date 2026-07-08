#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	int i = 2;//每次打印
	printf("请输入一个整数:");
	scanf("%d", &n);
	while (i <= n)//大于n的偶数不输出
	{
		printf("%d ", i);
		i = i + 2;//每个偶数之间相差2
	}

	return 0;
}