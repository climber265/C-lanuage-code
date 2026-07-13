#include <stdio.h>

int main() {
    int n, a, b, c, d;
    scanf("%d", &n);
    a = n % 10;//个位
    n = n / 10;
    b = b % 10;//b未赋值，应该是b=n%10;
    n = n / 10;
    c = n % 10;
    n = n / 10;
    d = n % 10;

    printf("%d%d%d%d\n", a, b, c, d);

    return 0;
}

//此外还有一个问题，就是这段代码只满足四位数逆序输出，任意位数就不行
//在头文件上面在加一个#define _CRT_SECURE_NO_WARNINGS,保证使用scanf函数不出错