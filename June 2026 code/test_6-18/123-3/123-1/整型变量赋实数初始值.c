#include <stdio.h>
int main()
{
	int a = 3.14;
	int b = 5.7;
	printf("%d %d\n", a, b);
	 
	return 0;
}

//结果是3和5，原因是整型变量赋实数初始值会被截断，只保留整数部分。