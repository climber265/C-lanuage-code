//链接：https://www.nowcoder.com/questionTerminal/72347ee949dc47399186ee183632f303
//来源：牛客网
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的“空心”正方形图案。
//输入描述 :
//多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“ * ”的数量。
//输出描述 :
//针对每行输入，输出用“ * ”组成的“空心”正方形，每个“ * ”后面有一个空格。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a,i,j;
	while (scanf("%d", &a) != EOF)//实现多组输入
	{
		for (i = 1; i <= a; i++)//行循环
		{
			for (j = 1; j <= a; j++)//列循环
			{
				if (i == 1 || i == a || j == 1 || j == a)//逻辑运算符||，条件满足其一即可打印*
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");

		}
	}

	return 0;
}