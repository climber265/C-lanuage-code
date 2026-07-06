#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
int main()
{
	int num=0;//输入的数字
	int sum = 0;//数字总和
	int cnt=0;//数字个数
	int retry=0;//再次执行的变量
	do
	{
		printf("请输入一个整数:");
		scanf("%d", &num);
		sum = sum + num;//和累加
		cnt++;//数字个数累加
		printf("想不想继续执行，想就输入0，不想就输非0值");
		scanf("%d", &retry);
		
	} while (retry == 0);//do while循环，循环体一定会执行一次，再进行条件判断
	 
	printf("整数的和是%d\n", sum);
	
	printf("平均值是%.2f", (double)sum / cnt);//计算平均值，运用强制类型转换运算符，sum转换为double型

	return 0;
}
