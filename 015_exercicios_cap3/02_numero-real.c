#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Ex 02 - ler um número real e imprimir a quinta parte dele.\n");

    int real, quinta_parte;
    printf("Registre o número: ");
    scanf("%d", &real);

    quinta_parte = real / 5;

    printf("A quinta parte inteira de %d é %d\n", real, quinta_parte);

}
