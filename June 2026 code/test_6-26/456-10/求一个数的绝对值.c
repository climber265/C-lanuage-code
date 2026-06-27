#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double num;//因为绝对值函数fabs只能接收浮点型数字，所以要定义为浮点型
	printf("请输入一个数字:");
	scanf("%lf", &num);
	if (num > 0)
	{
		printf("绝对值是%f\n", num);
	}
	else 
		if (num < 0)
		   printf("绝对值是%.0f\n", fabs(num));
	//%m.nf是printf函数格式化输出的形式，m为数据总宽度，n为小数宽度，这里的0就是不保留小数部分，只留整数部分
	    else
		   printf("绝对值是0。\n");

	return 0;
}