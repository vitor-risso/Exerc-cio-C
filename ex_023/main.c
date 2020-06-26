#include <stdio.h>

int main (){

    float a, b;

    printf("Digete dois valores para a equação de pirmeiro grau : \n");
    scanf("%f", &a);
    scanf("%f", &b);

    float eq;

    eq = -b/a;

    printf("A raiz da euqação é %f", eq);

    return 0;
}