#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int length, width;
	int area = 0;
	puts("请输入length和width:");
	printf("长："); scanf("%d", &length);//输入长
	printf("宽："); scanf("%d", &width);//输入宽
	area = length * width;//矩形面积公式长*宽
	printf("面积是%d\n", area);

	return 0;
}