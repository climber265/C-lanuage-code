#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;//arr1下标
	int j = 0;//arr2下标
	int k = 0;//res的下标
	int n = 0;
	int m = 0;//两个循环变量
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	int res[2000] = { 0 };
	printf("请输入前两个数组的长度:");
	scanf("%d %d ", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (j = 0; j < m; j++)
	{
		scanf("%d", &arr2[j]);
	}

	//把前两个数组的值合并到第三个数组res中
	i = 0; j = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			res[k] = arr1[i];
			i++;
		}
		else
		{
			res[k] = arr2[j];
			j++;
		}
		k++;//k来控制数组res的下标

	}

	while (i < n)
	{
		res[k] = arr1[i];
		i++;
		k++;
	}
	while (j < m)
	{
		res[k] = arr2[j];//把arr2剩余的元素按顺序复制到res[k]中
		j++;
		k++;
	}

	//最后循环打印合并后的数组res
	for (int t = 0; t < k; t++)
	{
		printf("%d ", res[t]);//t指的是数组res的临时下标
	}

	return 0;
}  



//拿一组简单数据演示，直观看懂 k 全程变化：
//输入：
//n = 2，m = 2
//arr1 = { 1,4 }
//arr2 = { 2,3 }
//初始状态：i = 0, j = 0, k = 0
//第一轮 while (i < 2 && j < 2)
//	arr1[0] = 1 < arr2[0] = 2
//	res[0] = 1
//	i 变成 1
//	执行 k++ → k = 1
//	现在：res[0] = 1，i = 1, j = 0, k = 1
//	第二轮 while (i < 2 && j < 2)
//	arr1[1] = 4 > arr2[0] = 2
//	res[1] = 2
//	j 变成 1
//	执行 k++ → k = 2
//	现在：res[0] = 1 res[1] = 2，i = 1, j = 1, k = 2
//	第三轮 while (i < 2 && j < 2)
//	arr1[1] = 4 > arr2[1] = 3
//	res[2] = 3
//	j 变成 2
//	执行 k++ → k = 3
//	现在：res[0] = 1 res[1] = 2 res[2] = 3，i = 1, j = 2, k = 3
//	再次判断 while 条件：j = 2 不小于 m = 2，循环结束
//	此时还有 arr1 剩余元素 i = 1 < 2，进入下一个 while
//	res[3] = 4
//	i++ → i = 2
//	k++ → k = 4
//	全部合并完成，k 最终 = 4
