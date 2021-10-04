#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // ������������ ���� ��� �������������� ��������
#include <locale.h> 

int main() 
{
	char* locale = setlocale(LC_ALL, "");
	double x, y; //���������� x � y 
	printf("������� x ");
	scanf("%lg", &x);
	if (x <= 2) { //���������� ������� ���������
		y = fabs(sin(x)); //fabs - ��� ������� ��� ������ ������
	}
	else if (x <= 10) {
		y = log10(0.5 * x); // log10 - ���������� ��������
	}
	else if (x <= 30) {
		y = sqrt(x); //sqrt - ���������� ������
	}
	else {
		y = sin(sqrt(x));
	}
	printf("���������: f(%lg) = %lg\n", x, y);
	return 0;
}