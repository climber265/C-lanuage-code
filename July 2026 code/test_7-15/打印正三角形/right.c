#include <stdio.h>
int main()
{
	int i;
	int j;
	for (i = 1; i <= 5; i++)//外层循环，控制行
	{
		for (j = 1; j <= i; j++)//内层循环，每执行一次外层循环，跑完一整趟内层循环
		{
			putchar('*');
		}
		putchar('\n');//每打印一行换行
	}

	return 0;
}