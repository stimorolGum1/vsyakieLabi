#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	char* locale = setlocale(LC_ALL, "");
	char forSwitch; // ������������ ���� char (c�����),
	printf("������� ������: ");
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
������, ��� �������� switch. � ����������� �� ����, ��� �������� � ����� ���������� ����. ��������, ���� � ����� �������� A, �� ��������� ��� ������� ��������� � ���.
� ����� �������� ��� ������: char, short, int, long. � ������ ���� �� ��� �������� � ����� ���������� � ������, �� ���������� ���� default.s
*/