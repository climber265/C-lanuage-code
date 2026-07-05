//链接：https://www.nowcoder.com/questionTerminal/78ed8bed04b94b55b525b83fc6e9757a
//来源：牛客网
//对于给出的两个浮点数a, b，你需要判断 a−b 是否精确等于浮点数 c。
//输入描述 :
//第一行输入三个小数点后位数不超过6 位的浮点数a, b, c(−100≤a, b, c≤100)。
//输出描述 :
//如果 a−b 等于 c，输出YES；否则输出 NO。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("请输入三个浮点数：");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (fabs(a - b - c) < 1e-7)//这个的原因是防止丢失精度，因为输入精度为六位，只要远小于1e-6都可以
        printf("YES");
    else
        printf("NO");

    return 0;
}