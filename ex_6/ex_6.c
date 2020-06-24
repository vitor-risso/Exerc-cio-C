#include <stdio.h>

int main (){
    float lado, LADO;

    // base
    printf("Informa a base do retÂngulo para acharmos a área dela: ");
    scanf("%f", &lado);
    printf("\n");

    // altura
    printf("Digite o valor da altura em cm: ");
    scanf("%f", &LADO);
    printf("\n");

    //resultado

    printf("A área do retângulo vale %.2f cm²\n\n", lado * LADO);


    return 0;
}