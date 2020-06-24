#include <stdio.h>
#include <stdlib.h>

int main(){

    float A, Q, B;
    A=B=Q=0;

    // quantidade de lados
    printf("Digite o numero de lados do polígono em cm: "); 
    scanf("%f", &Q);
    printf("\n");

    //base
    printf("Digite o valor da base em cm: ");
    scanf("%f", &B);
    printf("\n");

    //apotema
    printf("Digite o valor do apótema em cm: ");
    scanf("%f", &A);
    printf("\n");

    //resultado
    printf("A área do polígono regular que você digitou é %.2f cm²\n", (Q*A*B)/2);

    return 0;
}