#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num,retry;
	do
	{
		printf("请输入一个整数:");
		scanf("%d", &num);
		switch (num % 2)
		{
		case 0:
			printf("是偶数\n");
			break;
		case 1:
			printf("是奇数\n");
			break;
		}
		
	} while (retry == 0);//当retry等于0时退出循环，不为0时继续循环
	
	return 0;
	
}