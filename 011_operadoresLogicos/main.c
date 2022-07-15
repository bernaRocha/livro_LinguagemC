#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    // page 56
    int r, x = 5, y = 3;
    r = (x > 2) && (y < x);
    printf("Resultado: %d\n", r);

    r = (x % 2 == 0) && (y > 0);
    printf("Resultado: %d\n", r);

    r = (x > 2) || (y > x);
    printf("Resultado: %d\n", r);

    r = (x % 2 == 0) || (y < 0);
    printf("Resultado: %d\n", r);

    r = !(x > 2);
    printf("Resultado: %d\n", r);

    r = !(x > 7) && (x > y);
    printf("Resultado: %d\n", r);


    return 0;
}
