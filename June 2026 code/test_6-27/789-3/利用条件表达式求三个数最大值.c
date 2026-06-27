#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2, n3, max;
	printf("请输入三个整数：");
	scanf("%d %d %d", &n1, &n2, &n3);

	max = n1;//假设n1为最大值
	max = (n2 > max) ? n2 : max;//如果n2大于max，则n2为最大值，否则保留原值
	max = (n3 > max) ? n3 : max;//如果n3大于max，则n3为最大值，否则保留原值
	printf("最大值是%d\n", max);

	return 0;
}