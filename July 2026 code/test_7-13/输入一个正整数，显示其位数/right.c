#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	int digit = 0;
	printf("请输入一个正整数:");
	scanf("%d", &num);
	while (num > 0)
	{
		num = num / 10;
		digit++;//
		
	}

	printf("位数有%d位", digit);
	return 0;
}