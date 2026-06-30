//链接：https://www.nowcoder.com/questionTerminal/1f7c1d67446e4361bf4af67c08e0b8b0
//题目：给定一个四位整数n（1000≦n≦9999），将其各位数字反向输出。若反向后高位为零，也需保留该零。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a = n / 1000;
	n = n % 1000;
	int b = n / 100;
	n = n % 100;
	int c = n / 10;
	n = n % 10;
	int d = n;
	printf("%d%d%d%d\n", d, c, b, a);

	return 0;
}