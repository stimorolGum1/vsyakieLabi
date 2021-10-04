#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	char* locale = setlocale(LC_ALL, "");
	double n;
	double i;
	double sum = 0;
	double S;
	printf("¬ведите n ");
	scanf("%lg", &n);
	S = 0;
	for (double i = -n; i <= n; i++); { 
		i = -n;
		S = 1 / 1 + pow(i, 4);
	}
	printf("%1.f.\n", S);
	return 0;
}