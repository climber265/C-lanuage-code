//链接：https://www.nowcoder.com/questionTerminal/f72c56ed71664af082c921bf79861c85
//来源：牛客网
//牛牛有一个线段放在二维坐标系中，已知线段两个点的坐标
//(𝑥1,𝑦1)和(𝑥2,𝑦2)，知道这个线段的长度的平方，即两点的欧几里得距离的平方。
//【名词解释】
//欧几里得距离：对于平面上的两个点(x1,y1)和(𝑥2,𝑦2),其欧几里得距离为sqrt[(𝑥1−𝑥2)^2+(𝑦1−𝑦2)^2]
//输入描述 :第一行输入两个整数𝑥1,𝑦1(0≤𝑥1,𝑦1≤100)x1​, y1​(0≤x1, y1≤100)，表示线段的第一个点的坐标。
//第二行输入两个整数𝑥2,𝑦2(0≤𝑥2,𝑦2≤100)表示线段的第二个点的坐标。
//输出描述 :
//输出一个整数，表示线段的长度的平方。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int x1, x2, y1, y2;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    int distance = (pow(x1 - x2, 2) + pow(y1 - y2, 2));//根据题目要求定义变量distance

    printf("%d\n", distance);
    
    return 0;
}