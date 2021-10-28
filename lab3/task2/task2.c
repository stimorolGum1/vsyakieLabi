#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h> 
#include <string.h>


int main()
{
	char* locale = setlocale(LC_ALL, "");
	char letters[80];
	printf("Введите строку: \n");
	printf("Даша попа\n");
	gets(letters);
	
	for(int i = 0; i < strlen(letters); i++)
		switch (letters[i])
		{
		case 'a': 
		case 'b':
		case 'c':
		case 'A':
		case 'B':
		case 'C':
			letters[i] = '2';
			break;
		case 'd':
		case 'e':
		case 'f':
		case 'D':
		case 'E':
		case 'F':
			letters[i] = '3';
			break;
		case 'g':
		case 'h':
		case 'i':
		case 'G':
		case 'H':
		case 'I':
			letters[i] = '4';
			break;
		case 'j':
		case 'k':
		case 'l':
		case 'J':
		case 'K':
		case 'L':
			letters[i] = '5';
			break;
		case 'm':
		case 'n':
		case 'o':
		case 'M':
		case 'N':
		case 'O':
			letters[i] = '6';
			break;
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			letters[i] = '7';
			break;
		case 't':
		case 'u':
		case 'v':
		case 'T':
		case 'U':
		case 'V':
			letters[i] = '8';
			break;
		case 'w':
		case 'x':
		case 'y':
		case 'z':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			letters[i] = '9';
			break;
		default:
			break;
		}
	printf("\n%s\n%s", "Результат", letters);
	getchar();
	return 0;
}