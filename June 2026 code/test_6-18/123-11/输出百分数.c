#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float x, y;
	puts("请输入两个数字。");
	printf("数字1:"); scanf("%f", &x);
	printf("数字2:"); scanf("%f", &y);
	float c = (x / y)*100;//x/y不是整除，就是普通小数除法
	printf("x的值是y的%.f%%。",c );//%%输出百分号%

	return 0;
}