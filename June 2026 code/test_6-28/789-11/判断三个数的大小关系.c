#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2, n3;
	printf("请输入三个整数：");
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1 == n2 && n2 == n3)
		printf("三个值都相等。\n");
	else if (n1 == n2 || n2 == n3 || n1 == n3)
		printf("有两个值相等。\n");
	else
		printf("三个值各不相同。\n");

	return 0;
}

//思路：必须按照三个数相等，任意两个数相等，三个值都不相同的逻辑顺序判断！！