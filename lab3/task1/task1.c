#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main()
{
    char* locale = setlocale(LC_ALL, "");
    const int arraySize = 10;
    int t;
    int array[10] = { 34, 23, 1, 54, 32, 0, 45, 76, 29, 12 };
    printf("������� �����, ������� ������ �����: ");
    scanf("%i", &t);

        for (int i = 0; i < arraySize; i++)
        {
            if (array[i] == t)
            {
                printf("���� � ��� ������ � ������� �����: %d\n", i);
                printf("���� ����");
                return 0;
            }
        }

        printf("�������� ������ ����� ���� � �������!");
        return 0;
    }
