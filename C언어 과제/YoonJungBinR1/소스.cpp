#include "stdafx.h"
#include <stdio.h> 
#include <math.h>


int main(void)
{
	double a, b, c, x;
	printf("input a : "); scanf_s(" %lf��, a"); 
	printf("input b : "); scanf_s(" %lf��, b");
	printf("input c : "); scanf_s(" %lf��, c");
	x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a); // sqrt�� ����ؼ� ��Ʈ�� ���ÿ��� #include <math.h>�� �ʿ�
	printf("X=%lf", x);
	return 0;
}
