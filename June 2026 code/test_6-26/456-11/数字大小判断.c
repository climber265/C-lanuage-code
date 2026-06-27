#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B;
	printf("请输入两个整数：");
	scanf("%d %d", &A, &B);
	if (A > B)//分成三种情况，A大于B，A小于B，A等于B,利用嵌套if
		printf("A大于B。\n");
	else 
		if (A < B)
		   printf("A小于B。\n");
	    else
		   printf("A和B相等。\n");

	return 0;
}