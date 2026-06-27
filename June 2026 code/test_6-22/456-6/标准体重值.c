#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int height;
	printf("请输入您的身高:");
	scanf("%d", &height);
	double weight = (height - 100) * 0.9;//int*double=double
	printf("您的标准体重是%.1f公斤。\n", weight);

	return 0;
}