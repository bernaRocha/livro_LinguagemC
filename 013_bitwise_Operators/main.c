#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bitwise operators ~ complement\n"); // page 58
    printf("Bitwise operators & AND\n");
    printf("Bitwise operators | OR.\n");
    printf("Bitwise operators ^ XOR.\n");
    printf("Bitwise operators << left shift.\n");
    printf("Bitwise operators >> right shift.\n");
    printf("Can only bve used in char, int and long types.\n");

    unsigned char x, y;
    x = 44;                 // 00101100 em binário
    printf("x = %d\n", x);
    y = ~x;                 // complemento ~
    printf("~x = %d\n", y); // 11010011 em binário

    x = 44;
    printf("x = %d\n", x);
    y = x & 167;
    printf("x & 167 = %d\n", y);
    y = x | 129;
    printf("x | 129 = %d\n", y);
    y = x ^ 167; //XOR
    printf("x ^ 167 = %d\n", y);
    return 0;
}
