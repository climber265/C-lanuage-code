#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i;
	int j;
	int row, col;
	printf("请输入行列值:");
	scanf("%d %d", &row, &col);
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if ((i == 1 || i == row) || (j == 1 || j == col))
			{
				putchar('*');
			}
			else
				printf(" ");
		} 
		printf("\n");
	}

	return 0;

}