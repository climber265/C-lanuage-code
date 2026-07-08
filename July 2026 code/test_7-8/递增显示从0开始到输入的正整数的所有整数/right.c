#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	printf("请输入一个整数:");
	scanf("%d", &n);
	if (n >= 0)//只有n大于等于0，才有进入while循环和换行的资格
	{
		while (i <= n)
		{
			printf("%d ", i);
			i++;
		}
		printf("\n");
	}

	return 0;
}