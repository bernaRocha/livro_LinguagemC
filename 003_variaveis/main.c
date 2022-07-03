#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int x;
    printf("X = %d\n", x); // 0
    x = 5;
    printf("X = %d\n", x); // 5

    char caractere = 'a';
    char disponivel = 's';

    // Os tipos char e int podem ser específicados nas bases decimal, octal ou hexagonal
    int n = 1459;
    int octal = 0467;
    printf("A var de valor 0467 em Octal = %d\n", octal);  //311

    int hexadec = 0XDF4A;
    printf("A var hexadec 0XDF4A em decimal corresponde a %d\n", hexadec);

    int a = 125;
    int b = 0435;
    int c = 0x1FA;

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
    printf("Valor de c: %d\n", c);
    printf("\n\n");

    // Tipos float e double
    // float tem precisão simples e doble dupla precisão
    printf("Float e double");
    float f = 5.25;
    double d = 15.673;
    printf("Valor de f: %f\n", f);
    printf("Valor de d: %f\n", d);

    // Modificadores
    printf("unsigned char q; // Pode ser de 0 até 255 \n");
    printf("unsigned int w;  // Pode ser de 0 até 4.294.967.295 \n");
    unsigned char q; // Pode ser de 0 até 255
    unsigned int w;  // Pode ser de 0 até 4.294.967.295
    printf("\n\n");
    short int y; // Terá apenas 16 bits independente do processador

    // Modificador long
    printf("Modificador long terá 32 bits independente do processador\n");
    printf("long int n; long double d; \n");
    printf("\n\n");

    printf("Combinação de dois modificadores: unsigned long int m; \n");
    printf("\n\n");

    system("pause");
    return 0;
}
