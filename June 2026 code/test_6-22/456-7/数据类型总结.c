#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	double b;
	scanf("%d %lf", &a, &b);
	printf("%f\n",a + b);
	printf("%f\n", a - b);
	printf("%f\n", a * b);
	printf("%f\n", a / b);
	printf("%f%%\n", (a / b)* 100);//输出百分数

	return 0;


}

//int与double的加减乘除和取百分数的结果均是double型