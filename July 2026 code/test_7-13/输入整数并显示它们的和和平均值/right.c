#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;//循环变量
	int num = 0;//整数个数
	int sum = 0;
	
	printf("要输入几个整数:");
	scanf("%d", &num);
	while (i < num)
	{
		int temp;//临时变量，代表你输入的数字
		scanf("%d", &temp);
		sum = sum + temp;//累加
		i++;


	}
	double avg = (double)sum / num;//平均值，将sum转化为double型，防止精度误差

	printf("总和为%d\n", sum);
	printf("平均值为%.2lf",avg );

	return 0;


}