#include "stdafx.h"
#include <stdio.h> 
#include <math.h>


int main(void)
{
	double a, b, c, x;
	printf("input a : "); scanf_s(" %lf”, a"); 
	printf("input b : "); scanf_s(" %lf”, b");
	printf("input c : "); scanf_s(" %lf”, c");
	x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a); // sqrt를 사용해서 루트를 계산시에는 #include <math.h>가 필요
	printf("X=%lf", x);
	return 0;
}
