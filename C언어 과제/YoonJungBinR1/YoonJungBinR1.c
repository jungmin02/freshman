
#include<stdio.h>
#include <math.h>





double factorial() {
	int fac;
	double value;
	printf(" 팩토리얼을 할 수를 입력하세요. (정수만 입력하세요) ==>  ");
	scanf_s("%f", &fac);
	value = 1;
	for (int i = 1; i <= fac; i++) {
		value = value * i;
	}
	return value;
}

double squared() {
	int mit, zi;
	double value;
	printf(" 제곱의 밑 수를 입력하세요. (정수만 입력하세요) ==>  ");
	scanf_s("%d", &mit);
	printf(" 제곱의 지수를 입력하세요. (정수만 입력하세요) ==>  ");
	scanf_s("%d", &zi);
	value = pow(mit, zi);
	return value;
}

double sqrte() {
	int ba, an;
	double value;
	printf(" 루트 바깥의 숫자를 입력하세요 (정수만 입력하세요) ==>  ");
	scanf_s("%d", &ba);
	printf(" 루트 안의 숫자를 입력하세요 (정수만 입력하세요) ==>  ");
	scanf_s("%d", &an);

	double loot = sqrt(an);

	printf("%f\n", loot);

	value = ba + loot;
	return value;
}

double essence() {
	double value;
	printf(" 일반수를 입력하세요 ==>  ");
	scanf_s("%d", &value);
	return value;
}



double firstNumFunction()
{
	int ma;
	double firstNumValue;
	printf(" 사용 할수 있는 기능은 1.팩토리얼 2.제곱수 3.루트 4.정수\n");
	printf(" 1 번째 수를 입력하세요 \n");
	printf(" 사용하실 기능을 입력하세요 ==>  ");
	scanf_s("%d", &ma);
	if (ma == 1)
	{
		firstNumValue = factorial();
		return firstNumValue;
	}
	else if(ma == 2) {
		firstNumValue = squared();
		return firstNumValue;
	}
	else if(ma == 3) {
		firstNumValue = sqrte();
		return firstNumValue;
	}
	else if(ma == 4) {
		firstNumValue = essence();
		return firstNumValue;
	}
	else {
		printf("지정된 수가 아닙니다");
		exit(0);
	}
}

double secondNumFunction(int i) {

	int ma;
	double secondNumValue;
	printf(" 사용 할수 있는 기능은 1.팩토리얼 2.제곱수 3.루트 4.일반수\n");
	printf(" %d 번째 수를 입력하세요 \n" , i+2);
	printf(" 사용하실 기능을 입력하세요 ==>  ");
	scanf_s("%d", &ma);
	if (ma == 1)
	{
		secondNumValue = factorial();
		return secondNumValue;
	}
	else if (ma == 2) {
		secondNumValue = squared();
		return secondNumValue;
	}
	else if (ma == 3) {
		secondNumValue = sqrte();
		return secondNumValue;
	}
	else if (ma == 4) {
		secondNumValue = essence();
		return secondNumValue;
	}
	else {
		printf("지정된 수가 아닙니다");
		exit(0);
	}

}

double math(double a, double b) {
	double mathValue;
	int buho;
	printf("첫 번째 숫자 %f\n", a);
	printf("두 번째 숫자 %f\n", b);
	printf(" 부호를 입력하세요( 1  = '+', 2 = '-', 3 = '*', 4 =  '/' ) ==>  ");
	scanf_s("%d", &buho);

	printf("%d\n", buho);

	if (buho == 1) {
		mathValue = a + b;
		return mathValue;
	}
	else if (buho == 2) {
		mathValue = a - b;
		return mathValue;
	}
	else if (buho == 3) {
		mathValue = a * b;
		return mathValue;
	}
	else if (buho == 4) {
		mathValue = a / b;
		return mathValue;
	}
	else {
		printf("지정된 기호가 아닙니다.");
		exit(0);
	}
}

int main()
{
	int loof;
	double firstnum, secondnum ,sum ;
	printf(" 입력한 순서대로 계산합니다.\n");
	printf(" 계산할 숫자 갯수를 입력하세요 (2이상인 수) ==>  ");
	
	scanf_s("%d", &loof);

	firstnum = firstNumFunction();

	printf("첫 번째 숫자 %f\n", firstnum);
		for (int i = 0; i <= loof - 2; i++) {
			secondnum = secondNumFunction(i);
			printf("%d 번째 숫자 %f\n",i+2 , secondnum);
			sum = math(firstnum, secondnum);
			printf("결과는  ==> %f \n", sum);
			firstnum = sum;
	}

	
}

