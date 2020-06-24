#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float b, B, altura;

    // base menor
    printf("Digite o valor da base menor em cm: ");
    scanf("%f", &b);
    printf("\n");

    //base maior
    printf("Digite o valor da base mairo em cm: ");
    scanf("%f", &B);
    printf("\n");

    //alutra

    printf("Digite o valor da altura em cm: ");
    scanf("%f", &altura);
    printf("\n");

    //resultado
    printf("O valor da áre é de %.2f cm²\n", ((b+B)*altura)/2);

    return 0;
}