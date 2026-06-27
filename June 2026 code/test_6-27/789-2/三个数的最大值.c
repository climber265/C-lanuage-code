#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2, n3, max;
	printf("请输入三个整数:");
	scanf("%d %d %d", &n1, &n2, &n3);
	max=n1;//假设n1为最大值
	if (n2 > max)
	{
		max = n2;//如果n2大于最大值，则n2为最大值
		
	}
	if (n3 > max)
	{
		max = n3;//如果n3大于最大值，则n3大于最大值
		
	}

	printf("最大值是%d\n", max);

	return 0;
}