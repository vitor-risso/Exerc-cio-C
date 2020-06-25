#include <stdio.h>


int main(){

    float a, b, c;

    printf("Digite os valores de 3 angulos: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(a + b + c == 180 ){

        printf("Sim\n");
    }else{
        printf("Não\n");
    }

    return 0;
}