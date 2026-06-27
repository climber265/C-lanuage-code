#include <stdio.h>
int main()
{
	int a=3, b=2;
	double c = 5.0, d,e;
	d = c * b;//int*double=double,int向上转化成double型
	e = c + b;//int+double=double,int向上转化成double型
	printf("%f %f\n", d,e);

	return 0;
}