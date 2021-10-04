#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // заголовочный файл для матетатических операций
#include <locale.h> 

int main() 
{
	char* locale = setlocale(LC_ALL, "");
	double x, y; //Объявление x и y 
	printf("Введите x ");
	scanf("%lg", &x);
	if (x <= 2) { //вычисление первого уравнения
		y = fabs(sin(x)); //fabs - это функция для взятия модуля
	}
	else if (x <= 10) {
		y = log10(0.5 * x); // log10 - десятичный логарифм
	}
	else if (x <= 30) {
		y = sqrt(x); //sqrt - квадратный корень
	}
	else {
		y = sin(sqrt(x));
	}
	printf("Результат: f(%lg) = %lg\n", x, y);
	return 0;
}