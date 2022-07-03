#include <stdio.h>
#include <stdlib.h>
int x = 5; // Aqui a variável é global
/*
    void incr(){
        x++; // Acesso à variável global
    }

    void func1(){
        int y; //var local
    }

    void func2(){
        int y;
    }
*/
int main()
{
    //Escopo é o conjunto de regras que determinam o uso e a validade das variáveis ao longo do programa/*
/*    printf("x = %d\n", x);
    incr();
    printf("x = %d\n", x);

    int y;
    scanf("%d", &y);
    if(y == 5) {
        int z = 1;
        printf("Z = %d\n", &z);
        printf("Y = %d\n", &y);
    }
*/
    printf("x = %d\n", x);
    int x = 6;
    printf("x = %d\n", x);
    {
        int x = 2;
        printf("x = %d\n", x);
    }
    x = 99999;
    printf("x = %d\n", x);
    return 0;
}
