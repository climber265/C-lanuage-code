//题目：判断三角形 链接：https://www.nowcoder.com/questionTerminal/689ec1e742394e09b1059556fc167b65
//来源：牛客网 
// KiKi想知道，已经给出的三条边a、b、c 能否构成一个非退化三角形，
// 如果能构成，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//【名词解释】非退化三角形：三条边长均大于0且任意两边之和均大于第三边的三角形。
//解题思路：先判断能否构成三角形，再按等边，等腰，普通三角形的顺序判断
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (!(a + b > c && a + c > b && b + c > a))  //等价于(a+b<=c && a+c<=b && b+c<=a)
		printf("Not a triangle!\n");//如果不满足条件，就不是三角形
	else if (a == b && b == c)
		printf("Equilateral triangle!\n");//等边三角形
	else if ((a == b) || (a == c) || (b == c))
		printf("Isosceles triangle!\n");//满足两腰相等，为等腰三角形
	else
		printf("Ordinary triangle!\n");//不满足上面两行条件就是普通三角形

	return 0;
}