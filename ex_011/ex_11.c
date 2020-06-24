#include <stdio.h>

int main(){

    float R;

    //raio
    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &R);
    printf("\n");

    //resultado

    printf("A ára do círculo é %.2f cm²\n", 3.1415*R * R );



    return 0;
}