#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercícios do cap 3: \n");

    int inteiro, antecessor, sucessor;

    printf("Ex 01 - Ler um número inteiro e retornar o antecessor e o seu sucessor.\n");
    printf("Registre o número inteiro: \n");
    scanf("%d", &inteiro);

    antecessor = inteiro - 1;
    sucessor = inteiro + 1;

    printf("Número registrado é: %d\n", inteiro);
    printf("O antecessor de %d é %d e o seu sucessor é %d.", inteiro, antecessor, sucessor);

    return 0;
}
