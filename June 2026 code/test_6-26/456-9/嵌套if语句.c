#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no;
	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no == 0)//关系运算符为真返回1，执行puts语句，否则执行下面的分支
		puts("该整数为0。");
	else if (no > 0)
		puts("该整数大于0。");
	else if(no<0)//这一个条件判断可去可不去，结果都相同，区别就是多了一次条件判断
		puts("该整数小于0。");

	return 0;
}