#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//德摩根定律：如果括号最前面有!，拆开括号要两步：
//1. 括号内每一个小判断都取反
//2. && 和 || 互相交换
//转换前后逻辑完全一样，不用额外整体取反
int main()
{
	int hand;
	do
	{
		printf("请输入一个整数:");//0:剪刀，1：石头；2：布
		scanf("%d", &hand);
	}
	while (!(hand >= 0 && hand <= 2));//含义：hand不在0~2时条件为真，重新输入；合法后条件为假，跳出循环执行switch
                                      //德摩根转换等价于 hand < 0 || hand > 2
	//括号前带!，用德摩根拆分：每个条件取反，&&换||，等价 hand < 0 || hand > 2
	switch (hand)
	{
	case 0:
		printf("剪刀"); break;
	case 1:
		printf("石头"); break;
	case 2:
		printf("布"); break;
	}

	return 0;


}
