#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	char* locale = setlocale(LC_ALL, "");
	char forSwitch; // переременная типа char (cимвол),
	printf("Введите символ: ");
	scanf("%c", &forSwitch);

	switch (forSwitch) {
	case 'A': 
		printf("a");
		break;
	case 'B':
		printf("b");
		break;
	case 'C':
		printf("c");
		break;
	case 'D':
		printf("d");
		break;
	case 'E':
		printf("e");
		break;
	case 'F':
		printf("f");
		break;
	default:
		printf("x\n");
		exit(EXIT_FAILURE);
	}
	return 0;
}
/*
Короче, как работает switch. В зависимости от того, что подается в свитч вызывается кейс. Например, если в свитч подается A, то сработает код который находится в нем.
В свитч подается тип данных: char, short, int, long. В случае если то что подалось в свитч отсутсвует в кейсах, то вызывается кейс default.s
*/