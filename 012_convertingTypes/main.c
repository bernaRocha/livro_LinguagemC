#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Conveting types. \n"); // page 51
    int x = 65;
    char ch;
    float f = 25.1;

    ch = x; // convert the int to a character ASCII
    printf("ch = %c\n", ch); // A

    x = f;
    printf("x = %d\n", x); // 25

    f = ch;
    printf("f = %f\n", f); // 65.000000

    f = x;
    printf("f = %f\n", f); // 25.000000
    return 0;
}
