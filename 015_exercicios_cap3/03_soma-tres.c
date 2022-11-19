#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Ex 03 - ler 3 inteiros e imprimir a soma. \n");

    int num1, num2, num3, soma;

    printf("Registre os números para ver a soma deles.\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    soma = num1 + num2 + num3;

    printf("A soma de %d, %d, %d é %d\n", num1, num2, num3, soma);

}
