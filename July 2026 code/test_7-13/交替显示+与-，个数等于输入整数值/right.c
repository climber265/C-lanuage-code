#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num=0;
	int i = 1;
	printf("请输入一个整数:");
	scanf("%d", &num);
	while (i <=num)//一定要加等号，否则打印的个数会比你输入的整数少一个
	{
		if (i % 2 == 1)
		{
			putchar('+');
		}
		else
			putchar('-');
		i++;//每次循环之后i要自增1，否则会死循环
		
	}
	

	return 0;
}