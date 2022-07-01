#include <stdio.h>
#include <stdlib.h>
#include "aritmetica.h"

//int soma(int a, int b){return a + b};
//int subtracao(int a, int b){return a - b};
//int produto(int a, int b){return a * b};
//int divisao(int a, int b){return a / b};
int main()
{
    int x, y, z;
    char ch;
    printf("Digite uma operacao matematica (+, -, *, /): ");
    ch = getchar();
    printf("Digite dois numeros(um numero, depois espaco e o outro + enter): ");
    scanf("%d %d", &x, &y);

    switch(ch){
        case '+': z = soma(x, y); break;
        case '-': z = subtracao(x, y); break;
        case '*': z = produto(x, y); break;
        case '/': z = divisao(x, y); break;
    default: z = soma(x, y);
    }

    printf("Resultado = %d\n", z);
    system("pause");
    return 0;
}
