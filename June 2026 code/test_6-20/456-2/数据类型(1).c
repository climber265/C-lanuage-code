#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{ 
	double a;
	printf("请输入一个实数:");
	scanf("%lf", &a);//double类型的占位符是%lf
	printf("你输入的是%lf\n", a);

	return 0;

}