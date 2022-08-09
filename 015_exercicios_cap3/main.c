#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define PI 3.1415926535898

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

    printf("Ex 07 - Faça um programa que leia um valor em reais e\n a cotação em dólar e imprimir o valor em dólares.\n");
    float real, cotacaoDolarDia, dolarConvertido;
    printf("Quanto em reais deseja investir em dólares? \n");
    scanf("%f", &real);
    printf("Qual a cotação do dólar de hoje? \n");
    scanf("%f", &cotacaoDolarDia);

    dolarConvertido = real / cotacaoDolarDia;

    printf("O valor convertido em dólares dá: %.3f", dolarConvertido);

    printf("Ex 08 - Converter graus Celsius em Fahrenheit. \n");
    float celsius, fahrenheit;
    printf("Qual a temperatura a ser convertida? \n");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0/5.0) + 32.0;

    printf("%.0f Celsius em Fahrenheit é: %.2f ", celsius, fahrenheit);

    printf("Ex 09- Leia um ângulo em graus e converta para radianos. \n");

    float graus, radianos;
    printf("Qual grau a ser convertido? \n");
    scanf("%f", &graus);

    radianos = (graus * PI) / 180;

    printf("O ângulo %.0f em radianos é %.5f", graus, radianos);

    printf("Ex 10 - Dividir a importância de 780.000,00 entre três ganhadores\n1- 46%% do total\n2- 32%% do total\n3 - Receberá o resto.\n");
    float ganhador1, ganhador2, ganhador3, montante = 780000.00;
    ganhador1 = 0.46 * montante;
    ganhador2 = 0.32 * montante;
    ganhador3 = montante - ganhador1 - ganhador2;

    printf("O ganhador 1 receberá %.2f\n", ganhador1);
    printf("O ganhador 2 receberá %.2f\n", ganhador2);
    printf("O ganhador 3 receberá %.2f\n", ganhador3);


    printf("Ex 11 - Ler o valor do raio de um círculo. Calcular e imprimir a área do círculo correspondente.\n");
    float raio, areaCirculo;
    printf("Qual o raio do círculo a ser calculado a sua área: \n");
    scanf("%f", &raio);

    areaCirculo = PI * raio * raio;

    printf("A área do circulo de raio %.1f é %.3f", raio, areaCirculo);

    printf("Ex 12 - ler a altura e o raio de um cilindro circular e imprimir o volume desse cilindro. \n");
    float alturaCirculo, raioCirculo, volumeCirculo;
    scanf("%f%f", &alturaCirculo, &raioCirculo);

    volumeCirculo = PI * raioCirculo * raioCirculo * alturaCirculo;

    printf("O volume do círculo de raio %.2f e altura %.2f é %.2f", raioCirculo, alturaCirculo, volumeCirculo);

*/
    printf("Ex 13 - Ler os valores dos catetos a e b, obtenha e imprima a hipotenusa.\n");
    float catetoA, catetoB, hipotenusa;
    scanf("%f%f", &catetoA, &catetoB);

    // Só roda via linha de comando
    hipotenusa = sqrt((catetoA * catetoA) + (catetoB * catetoB));

    printf("A hipotenusa de um triangulo com catetos de %.1f e %.1f e %.2f\n", catetoA, catetoB, hipotenusa);

    return 0;
}
