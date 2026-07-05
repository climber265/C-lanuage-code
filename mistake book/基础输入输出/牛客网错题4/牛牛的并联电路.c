//链接：https://www.nowcoder.com/questionTerminal/6e13936b6fc54f52ac22efd6c8e7fef3
//来源：牛客网
//牛牛有一个阻值r1和一个阻值𝑟2的电阻，牛牛想知道这两个电阻并联后等效电阻是多少。
//【提示】
//并联电路的等效电阻公式是：
// r= 1/(1/r1)+(1/r2)
//输入描述 :
//在一行上输入两个整数𝑟1,𝑟2(1≤𝑟1,𝑟2≤100)表示两个电阻的阻值。
//输出描述 :
//输出一个浮点数，表示两个电阻并联后的等效电阻值。
//由于实数的计算存在误差，当误差的量级不超过10的−2次方时，您的答案都将被接受。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int r1, r2;
    scanf("%d %d", &r1, &r2);
    double r = 1.0 / ((1.0 / r1) + (1.0 / r2));
    printf("%.1f\n", r);

    return 0;
}