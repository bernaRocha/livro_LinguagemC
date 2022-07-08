#include <stdio.h>
#include <stdlib.h>
#define numeroFloat 5.4
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

    printf("Ex08 - Ler três números e imprimir na ordem inversa. \n");
    int i, numbers[3];
    printf("Digite três números inteiros: \n");

    for(i = 0; i < 3; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("Resultado: \n");
    for(i = 2; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    printf("Ex09 - Leia três floats e imprima na ordem inversa \n");
    int i;
    float numbers[3];
    printf("Digite três números do tipo float: \n");

    for(int i = 0; i < 3; i++){
        scanf("%f", &numbers[i]);
         //fflush(stdin);
    }
    printf("Resultado: \n");
    for(i = 2; i >= 0; i--) {
        printf("%.1f ", numbers[i]);
    }

    printf("Ex10 Peça o dia, mês e ano e imprima os valores separados por barra. \n");
    int dia, mes, ano;
    printf("Digite o dia: \n");
    scanf("%d", &dia);
    printf("Em qual mês: \n");
    scanf("%d", &mes);
    printf("Em qual ano: \n");
    scanf("%d", &ano);

    printf("A data registrada é: %d/ %d/ %d ", dia, mes, ano);

    printf("Ex11 Definir uma constante e imprimir \n");
    printf("Tá na linha 3\n");
    printf("%.1f", numeroFloat);

    printf("Ex12 Faça uma constante inteira com const e imprima \n");
    const int idade = 34;
    printf("Idade = %d", idade);

    printf("Ex13 \n");
    char letra;
    letra = getchar();
    printf("Digite uma letra a ser impressa entre aspas duplas: \n");

    printf("Letra digitada: \"%c\"", letra);

    printf("Ex14 Ler três char e imprimir em uma linha usando apenas um printf \n");
    char letra1, letra2, letra3;
    scanf("%c %c %c", &letra1, &letra2, &letra3);

    printf("Letra 1 = %c \nletra 2 = %c \nletra 3 = %c", letra1, letra2, letra3);
*/
    printf("Ex15 Ler três valores: char int e float, imprimir de 3 formas diferentes usando apenas um printf \n");
    char letra;
    int numero;
    float numeroReal;
    printf("Registre uma letra: \n");
    scanf("%c", &letra);
    printf("Agora um número inteiro: \n");
    scanf("%d", &numero);
    printf("E agora um número real: \n");
    scanf("%f", &numeroReal);
    printf("Letra: %c, inteiro: %d real: %.1f\ninteiro: %d real: %.1f Letra: %c\nreal: %.1f Letra: %cinteiro: %d", letra, numero, numeroReal, numero, numeroReal, letra, numeroReal, letra, numero);
    return 0;
}
