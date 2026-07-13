#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    while (num > 0)
    {
        printf("%d", num % 10);//求出最后一位
        num = num / 10;//去掉最后一位
    }
    return 0;
}

//这段代码满足2位及以上数字的逆序输出