#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main()
{
    char* locale = setlocale(LC_ALL, "");
    const int arraySize = 10;
    int t;
    int array[10] = { 34, 23, 1, 54, 32, 0, 45, 76, 29, 12 };
    printf("Введите число, которое хотите найти: ");
    scanf("%i", &t);

        for (int i = 0; i < arraySize; i++)
        {
            if (array[i] == t)
            {
                printf("Есть и его индекс в массиве равен: %d\n", i);
                printf("Даша попа");
                return 0;
            }
        }

        printf("Извините вашего числа нету в массиве!");
        return 0;
    }
