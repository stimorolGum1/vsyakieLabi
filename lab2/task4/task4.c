#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

    int main()
    {
        char* locale = setlocale(LC_ALL, "");
        int i = 0, minNumber, number;
        printf("������� 9 �����: \n");
        scanf("%i", &number);
        minNumber = number;
        do {
            scanf("%i", &number);
            if (minNumber < number) minNumber = number;
            ++i;
        } while (i < 8);
        printf(" ������������= %i\n", minNumber);
        return 0;
    }