#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    printf("Função putchar()\n"); // Escreve um único caractere e converte número para caractere

    char c = 'a';
    int x = 65;

    putchar(c);
    putchar("\n");
    putchar(x); // para mim apareceu ¶A¶
    putchar("\n");
    system("pause");
    return 0;
}
