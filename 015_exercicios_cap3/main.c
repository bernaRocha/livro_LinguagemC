#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercícios do cap 3: \n");
/*
    int inteiro, antecessor, sucessor;

    printf("Ex 01 - Ler um número inteiro e retornar o antecessor e o seu sucessor.\n");
    printf("Registre o número inteiro: \n");
    scanf("%d", &inteiro);

    antecessor = inteiro - 1;
    sucessor = inteiro + 1;

    printf("Número registrado é: %d\n", inteiro);
    printf("O antecessor de %d é %d e o seu sucessor é %d.", inteiro, antecessor, sucessor);
    printf("Ex 02 - ler um número real e imprimir a quinta parte dele.\n");
    int real, quintaParte;
    printf("Registre o número: ");
    scanf("%d", &real);
    quintaParte = real / 5;
    printf("A quinta parte de %d é %d", real,quintaParte);
*/

    printf("Ex 03 - ler 3 inteiros e imprimir a soma. \n");
    int num1, num2, num3, soma;
    printf("Registre os números para ver a soma deles.\n");

    scanf("%d%d%d", &num1, &num2, &num3);
    soma = num1 + num2 + num3;

    printf("A soma de %d, %d, %d é %d", num1, num2, num3, soma);
    return 0;
}
