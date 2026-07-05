//描述
//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）, （14和61）, （146和1), 如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//例如：
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//
//求出 5位数中的所有 Lily Number。
//
//输入描述：
//无
//输出描述：
//一行，5位数中的所有 Lily Number，每两个数之间间隔一个空格。

#include <stdio.h>
int main()
{
	int num;
    long long lily;
	for (num = 10000; num <= 99999; num++)
	{
		lily = (num / 10000) * (num % 10000) + (num / 1000) * (num % 1000) + (num / 100) * (num % 100)
			+ (num / 10) * (num % 10);//根据变种水仙花数定义拆分
		if (lily == num)//如果循环中的数字等于lily,就打印
			printf("%lld ", lily);
	}

	return 0;
}