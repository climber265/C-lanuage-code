#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;//定义行变量，控制乘数
	int j = 1;//定义列变量，控制被乘数
	for (i = 1; i <= 9; i++)//小于等于9的原因是九九乘法表最大的数就是9
	{
		for (j = 1; j <= i; j++)//j<=i原因是要保证是下三角
		{
			printf("%d*%d=%d ", j,i,j*i);//依次接收三个占位符的值
		}
		printf("\n");
	}

	return 0;
}



//本题还是利用了嵌套循环的思想，每执行一次外层循环，跑完一次内层循环