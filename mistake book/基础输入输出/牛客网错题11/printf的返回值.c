//KiKi写了一个输出“Hello world!”的程序，BoBo老师告诉他printf函数有返回值，
// 你能帮他写个程序输出printf(“Hello world!”)的返回值吗？
//输入描述：
//无
//输出描述：
//包括两行：
//第一行为“Hello world!”
//第二行为printf(“Hello world!”)调用后的返回值。
#include <stdio.h>
int main()
{
	int a = printf("Hello world!");
	printf("\n");
	printf("%d", a);//a代表hello world!的字符总数

	return 0;
}
