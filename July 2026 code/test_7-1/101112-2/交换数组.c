#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr1[20];
	int arr2[20];
	int i, j,temp;//temp是中间变量，用来交换两个数组中的值
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (j = 0; j < 10; j++)
	{
		scanf("%d", &arr2[j]);
	}
	for (i = 0; i < 10; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	printf("交换后的数组1：\n");

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("交换后的数组2：\n");

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}