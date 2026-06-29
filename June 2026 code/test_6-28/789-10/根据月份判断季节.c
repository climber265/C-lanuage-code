#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int month;
	printf("请输入一个月份:");
	scanf("%d", &month);
	if (month >= 3 && month <= 5)
		printf("%d月是春季。\n", month);
	else if (month >= 6 && month <= 8)
		printf("%d月是夏季。\n", month);
	else if (month >= 9 && month <= 11)
		printf("%d月是秋季。\n", month);
	else if (month == 12 || month == 1 || month == 2)
		printf("%d月是冬季。\n", month);
	else
		printf("输入错误！\n");

	return 0;
}
//本段代码优点：不需要所有分支都需要判断，符合对应季节的月份直接输出