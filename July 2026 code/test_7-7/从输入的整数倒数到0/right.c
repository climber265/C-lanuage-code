#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	printf("请输入一个整数:");
	scanf("%d", &n);
	if (n >= 0)//只有大于等于0的数才会进入判断
	{
		while (n >= 1)
		{
			printf("%d ", n);
			n--;
		}
		printf("\n");

		return 0;
	}
}