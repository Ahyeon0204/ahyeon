#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b, c, d, e, max, min;

	printf("1 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf("%f", &a);
	printf("2 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf("%f", &b);
	printf("3 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf("%f", &c);
	printf("4 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf("%f", &d);
	printf("5 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf("%f", &e);

	while (max < min) {
		min = (a < b) ? a : b;
	}
	
	

	printf("---- ��� ----");
	printf("����� %f", (a + b + c + d + e) / 5);
}