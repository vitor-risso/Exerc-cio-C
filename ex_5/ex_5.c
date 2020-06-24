#include <stdio.h>
#include <stdlib.h>

int main (){

    float lado;

    printf("Vamos achar a área de um quadrado!\n\n");

    // pedindo lado
    printf("Nos informe quando vale o lado do quadrado em cm: ");
    scanf("%f", &lado);
    printf("\n");

    // resultado
    printf("A área do quadrado é %.2f cm² \n\n", lado * lado); 
 



    return 0;
}