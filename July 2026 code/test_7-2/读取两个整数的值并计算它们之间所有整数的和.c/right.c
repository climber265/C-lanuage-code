#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1 = 0;
	int n2 = 0;
	int i;
	int sum = 0;
	int temp;//中间变量，用于交换数值
	do {
		printf("请输入两个整数:");
		scanf("%d %d", &n1, &n2);
		if (n1 > n2)   //如果n1大于n2就将二者数值交换
		{
			temp = n1;
			n1=n2;//小值赋给n1
			n2 = temp;
		}

		sum = ((n1 + n2) * (n2 - n1 + 1)) / 2;
	} while (n1 == 0 && n2 == 0);//当n1与n2不为0时循环结束，否则继续执行

	printf("大于等于n1小于等于n2之间所有数的和是%d\n", sum);

	return 0;
}