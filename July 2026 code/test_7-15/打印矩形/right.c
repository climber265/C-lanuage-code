#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j;
	int row, col;//定义行列变量，row代表行，col代表列
	printf("请输入行列:");
	scanf("%d %d", &row, &col);
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)//内层循环，每执行一次外层循环，跑完一次内层循环
		{
			putchar('*');
		}
		printf("\n");
	}

	return 0;
}