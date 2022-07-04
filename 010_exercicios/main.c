#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    printf("Ex01\n");
    printf("Início do programa.\nFim");
    printf("\n\n");

    printf("Ex02 - Ler um número inteiro e depois imprimir: \n");
    int x;
    scanf("%d", &x);
    printf("O número digitado foi: %d\n", x);
    printf("\n\n");

    printf("Ex03\n");
    int exe3;
    printf("Digite um valor inteiro: ");
    scanf("%d", &exe3);
    printf("Valor lido: %d", exe3);
    printf("\n\n");

    printf("Ex04\n");
    int exe4;
    printf("Digite um valor inteiro: ");
    scanf("%d", &exe4);
    printf("Valor digitado %f", exe4);
    printf("\n\n");


    printf("Ex05\n");
    float flut5;
    printf("Digite um valor de ponto flutuante: ");
    scanf("%f", &flut5);
    printf("Valor digitado: %d", flut5); //Digitei 1.0 e imprimiu 1065353216

    printf("Ex06\n");
    printf("Leia um tipo double e o imprima na forma de notação científica\n");
    double d1;
    printf("Digite um tipo double: \n");
    scanf("%lf", &d1);
    printf("O valor digitado é: %f\n", d1);
    printf("Em notação científica fica %.1E", d1);

    printf("Ex07 - Ler um caractere e imprimir como número inteiro.\n");
    char letra;
    printf("Digite a letra: \n");
    scanf("%c", &letra);
    printf("A letra digita %c tem o valor inteiro: %i", letra, letra);
*/
    printf("Ex08 - Ler três números e imprimir na ordem inversa. \n");
    int i, numbers[3];
    printf("Digite três números inteiros: \n");

    for(i = 0; i < 3; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &numbers[i]);
            fflush(stdin);
    }
    printf("Resultado: \n");
    for(i = 2; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
