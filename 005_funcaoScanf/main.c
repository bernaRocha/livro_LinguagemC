#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("Hello world!\n");

    int x, z;
    float y;
    scanf("%d", &x); // Valor inteiro

    scanf("%f", &y); // Valor real

    scanf("%d%f", &x,&y); //Valor inteiro e real

    scanf("%d%d", &x,&z); // Dois valores inteios

    scanf("%d %d", &x,&z); //Dois valores inteiros e com espaço

    system("pause");
    return 0;
}
