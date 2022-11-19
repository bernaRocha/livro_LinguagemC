#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Ex 04 - ler 4 floats e calcular a média aritmética. \n");

    float num1, num2, num3, num4, media;

    printf("Registre os 4 números: \n");
    scanf("%f%f%f%f", &num1, &num2, &num3, &num4);

    media = (num1 + num2 + num3 + num4) / 4;

    printf("A média é %.2f\n\n", media);

}
