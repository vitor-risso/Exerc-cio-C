#include <stdio.h>
#include <stdlib.h>

int main(){

    float base, altura;

    printf("Vamos acahr a área do triângulo");

    // pedindo base
    printf("Digite o tamanho da base em cm: ");
    scanf("%f", &base);
    printf("\n");

    // pedindo altura
    printf("Digite a altura do triÂngulo em cm: ");
    scanf("%f", &altura);
    printf("\n");

    // imprimindo a area 
    printf("A área do triângulo é %.2f cm² \n\n", ((base*altura)/2) );



    return 0;
}