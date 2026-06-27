#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2, n3, min;
	printf("请输入三个整数:");
	scanf("%d %d %d", &n1, &n2, &n3);
	min = n1;//假设n1最小
	if (n2 < min)
	{
		min = n2;//如果n2比最小值还小，n2为最小值
	}
	if (n3 < min)
	{
		min = n3;//如果n3比最小值还小，n3为最小值
	}

	printf("最小值是%d。\n", min);

	return 0;
}