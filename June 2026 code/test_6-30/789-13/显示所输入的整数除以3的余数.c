#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	printf("请输入一个整数：");
	scanf("%d", &n);
	switch (n % 3)//一个整型的数除以3的余数是只可能是0，1，2
	{
	case 0:
		printf("除以3的余数是0。\n");
		break;//防止继续向下执行
	case 1:
		printf("除以3的余数是1。\n");
		break;
	case 2:
		printf("除以3的余数是2。\n");
		break;
	}

	return 0;
}