#include <stdio.h>

int main(){

    float base, altura;

    printf("Digite o tamanho da base em cm: ");
    scanf("%f", &base);
    printf("\n");

    // altura
    printf("Digite o valor da altura em cm: ");
    scanf("%f", &altura);
    printf("\n");


    //resultado

    printf("O valor da área é de %.2f cm²\n", base * altura); 


    return 0;
}