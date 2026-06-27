#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2, max;
	printf("请输入两个整数：");
	scanf("%d %d", &n1, &n2);
	if (n1 > n2)//n1大于n2则n1取最大值
	{
		max = n1;
		printf("最大值是%d\n", max);
	}
	else//否则n2最大
	{
		max = n2;
		printf("最大值是%d\n", max);
	}

	return 0;

}