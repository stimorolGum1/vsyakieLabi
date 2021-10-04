#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

    int main()
    {
        char* locale = setlocale(LC_ALL, "");
        int i = 0, minNumber, number;
        printf("Введите 9 чисел: \n");
        scanf("%i", &number);
        minNumber = number;
        do {
            scanf("%i", &number);
            if (minNumber < number) minNumber = number;
            ++i;
        } while (i < 8);
        printf(" Максимальное= %i\n", minNumber);
        return 0;
    }