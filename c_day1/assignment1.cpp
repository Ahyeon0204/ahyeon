#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b, c, d, e, max, min;

	printf("1 번째 실수를 입력하시오. ");
	scanf("%f", &a);
	printf("2 번째 실수를 입력하시오. ");
	scanf("%f", &b);
	printf("3 번째 실수를 입력하시오. ");
	scanf("%f", &c);
	printf("4 번째 실수를 입력하시오. ");
	scanf("%f", &d);
	printf("5 번째 실수를 입력하시오. ");
	scanf("%f", &e);

	while (max < min) {
		min = (a < b) ? a : b;
	}
	
	

	printf("---- 결과 ----");
	printf("평균은 %f", (a + b + c + d + e) / 5);
}