#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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


    printf("Ex 03 - ler 3 inteiros e imprimir a soma. \n");
    int num1, num2, num3, soma;
    printf("Registre os números para ver a soma deles.\n");

    scanf("%d%d%d", &num1, &num2, &num3);
    soma = num1 + num2 + num3;

    printf("A soma de %d, %d, %d é %d", num1, num2, num3, soma);

    printf("Ex 04 - ler 4 floats e calcular a média aritmética. \n");
    float num1, num2, num3, num4, media;
    printf("Registre os 4 números: \n");
    scanf("%f%f%f%f", &num1, &num2, &num3, &num4);

    media = (num1 + num2 + num3 + num4) / 4;
    printf("A média é %f", media);

    printf("Ex 05 - Calcule o ano de nascimento a partir da idade e o ano atual. \n");

    int idade, anoAtual, anoNascimento;
    int fezAniversario;

    printf("Diga sua idade e depois o ano atual: \n");
    scanf("%d%d", &idade, &anoAtual);
    printf("Você já fez aniversário este ano? Responda com 'S/s' ou 'N/n'\n");
    scanf("%c", &fezAniversario);

    fezAniversario = getchar();

    if(fezAniversario == 'S' || fezAniversario == 's') {
        anoNascimento = anoAtual - idade;
    } else {
        anoNascimento = anoAtual - (idade + 1);
    }
    printf("\n\nSeu ano de nascimento é %d", anoNascimento);

    printf("Ex 06 - Converta uma medida de Km/h em m/s: \n");
    float kmHora, mSegundo;
    scanf("%f", &kmHora);
    mSegundo = kmHora / 3.6;
    printf("\nA velocidade de %.1f em m/s é %.2f", kmHora, mSegundo);

*/
    printf("Ex 07 - Faça um programa que leia um valor em reais e\n a cotação em dólar e imprimir o valor em dólares.\n");
    float real, cotacaoDolarDia, dolarConvertido;
    printf("Quanto em reais deseja investir em dólares? \n");
    scanf("%f", &real);
    printf("Qual a cotação do dólar de hoje? \n");
    scanf("%f", &cotacaoDolarDia);

    dolarConvertido = real / cotacaoDolarDia;

    printf("O valor convertido em dólares dá: %.3f", dolarConvertido);
    return 0;
}
