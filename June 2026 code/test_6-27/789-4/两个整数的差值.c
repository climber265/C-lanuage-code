#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2,difference;//difference有减法结果差的意思
	printf("请输入两个整数:");
	scanf("%d %d", &n1, &n2);


	difference = (n1 > n2) ? (n1 - n2) : (n2 - n1);
	//如果n1大于n2,计算n1与n2的差，否则计算n2与n1的差

	printf("差值为%d。\n", difference);


	return 0;
}