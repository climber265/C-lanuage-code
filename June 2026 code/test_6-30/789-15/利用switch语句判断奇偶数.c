#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	printf("请输入一个整数:");
	scanf("%d", &num);
    switch (num % 2)
	{
	case 0:
		printf("是偶数\n");
		break;
	case 1:
	case -1:
		printf("是奇数\n");
		break;//同时兼容正负奇数，负奇数除以2的余数为-1，采用多个case共用一个printf
		   
	
	}

	return 0;
}