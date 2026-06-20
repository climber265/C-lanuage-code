//题目：链接：https://www.nowcoder.com/questionTerminal/0f855c7642b74cccb3c2366bb7732d2a
//来源：牛客网 小乐乐学校教学楼的电梯前排了很多人，他的前面有 n 个人在等电梯。
// 电梯每次可以至多乘坐 12 人，每次上下需要的时间 4 分钟（上需要2 分钟，下需要2 分钟）。
//假设最初电梯在 1 层，且排队的人会按照顺序依次进入电梯，进入电梯的时间忽略不计。
//请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", (n / 12) * 4 + 2);
    // n/12 是前面人群占满的完整电梯趟数，每趟电梯耗时4，最后+2是小乐乐自身耗时
    return 0;
}