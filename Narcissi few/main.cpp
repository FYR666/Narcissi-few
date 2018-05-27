#include"stdio.h"
int main()
{
	int a = 100, b, c, d;
	while (a<=999)
	{
		b = a / 100;
		c = (a / 10) % 10;
		d = a % 10;
		if (b*b*b + c*c*c + d*d*d ==a)
			printf("Ë®ÏÉ»¨Êý%d\n", a);
		a++;}
}