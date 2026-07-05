#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int sum = 0;
	printf("请输入一个项数:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
		   sum = sum + i;//奇数项相加，偶数项相减
	    }
		if (i % 2 == 0)
		{
			sum = sum - i;
		}
	}

	printf("%d\n", sum);

	return 0;
}