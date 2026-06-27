#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2, n3, n4, max;
	printf("请输入四个整数:");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	max=n1;//假设n1最大
	if (n2 > max)
	{
		max = n2;//如果n2比最大值都大，n2为最大值
	}
	if (n3 > max)
	{
		max = n3;//如果n3比最大值都大，n3为最大值
	}
	if (n4 > max)
	{
		max = n4;//如果n4比最大值都大，n4为最大值
	}
	printf("最大值是%d。\n", max);

	return 0;
}