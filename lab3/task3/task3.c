#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define M 5
#define N 5

int main()
{
    char* locale = setlocale(LC_ALL, "");
    int a[N][M];
    int sc[M];
    int s, i, j;
    srand(time(NULL));
    for (i = 0; i < M; i++) 
        sc[i] = 0;
    for (i = 0; i < N; i++) {
        s = 0;
        for (j = 0; j < M; j++) {
            a[i][j] = rand() % 10;
            printf("%5i", a[i][j]);
            sc[j] += a[i][j];
        }
        printf("\n");
    }
    for (i = 0; i < M; i++)
        printf("%5s", "--");
    printf("\n");
    for (i = 0; i < M; i++)
        printf("%5i", sc[i]);
    printf("\n");
    getch();
    return 0;
}