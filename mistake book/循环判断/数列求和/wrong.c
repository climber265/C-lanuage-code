#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int sum = 0;
	int n = 0;
	printf("请输入项数:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + pow(-1, i - 1) * i;//这里的pow函数输出是double型，可能会造成精度丢失，虽然不报错，但不推荐
	}
	printf("%d\n", sum);

	return 0;
}