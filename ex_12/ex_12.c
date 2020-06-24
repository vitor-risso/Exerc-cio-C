#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso, altura;

    printf("\n================CALCULADORA DE MASSA CORPOREA==============\n\n");

    //peso 
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);
    printf("\n");

    //altura
    printf("Digite sua altura em m: ");
    scanf("%f", &altura);
    printf("\n");

    //resultado 

    printf("O seu indice é de %.2f\n", peso / (altura * altura));

    return 0;
}
