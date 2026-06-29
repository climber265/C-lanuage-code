#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2,b;
	printf("请输入两个整数:");
	scanf("%d %d", &n1, &n2);
	b = (n1 == n2) ? 1 : 0;//利用中间变量b，相等输出1，否则输出0

	printf("%d\n", b);

	return 0;
}