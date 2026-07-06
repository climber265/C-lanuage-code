#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[20];
	int i,n;
	double sum = 0;
	printf("请输入10个数:\n");
	for (i = 0; i < 10; i++)
	{   
		
		scanf("%d", &arr[i]);

	}
	for (i = 0; i < 10; i++)
	{
	    sum = sum + arr[i];//累加
	}
	double avg = sum/10.0;//除以10.0浮点除法，不会出现整数截断问题

	printf("平均值是%.2f\n", avg);

	return 0;
}