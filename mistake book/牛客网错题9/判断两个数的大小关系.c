//链接：https://www.nowcoder.com/questionTerminal/f05358b9e8164b27871c87d3097f4dab
//来源：牛客网
//输入描述 :
//题目有多组输入数据，每一行输入两个整数（范围 - 2^31~2^31 - 1），用空格分隔。
//输出描述 :
//针对每行输入，输出两个整数及其大小关系，数字和关系运算符之间没有空格，详见输入输出样例。
//示例1
//输入
//1 1
//输出
//1 = 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) { //分大于小于等于三种情况
        if (a > b)
        {
            printf("%d>%d\n", a, b);
        }
        else if (a < b)
        {
            printf("%d<%d\n", a, b);
        }
        else
        {
            printf("%d=%d\n", a, b);
        }
    }
    return 0;
}