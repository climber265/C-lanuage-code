#include <stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5 - i; j++)
		{
			putchar(' ');//先打印空格
		}
		//和上面的打印空格的循环一样，都是嵌套在外层循环里的，执行一次外层循环，跑完一次内层循环
		for (j = 1; j <= i; j++)
		{
			putchar('*');
		}

		putchar('\n');
	}

	return 0;
}