#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 3, b = 4, c = 5;
	printf("%d\n", a == b);//关系运算符结果为假返回0
	printf("%d\n", c > b);//结果为真返回1

	return 0;
}