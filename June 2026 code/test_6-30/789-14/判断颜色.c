#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	printf("请输入一个整数:");
	scanf("%d", &num);
	switch (num)//只是为了匹配下面的分支，num为几匹配case几
	{
	case 1:
		printf("红色\n");
		break;
	case 2:
		printf("黄色\n");
		break;
	case 3:
		printf("蓝色\n");
		break;
		
	default:
		printf("黑色\n");
		break;
	}

	return 0;
}