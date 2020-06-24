#include <stdio.h>

int main(){
    
    float d, D;

    // diagonal menor 
    printf("INforme a diagonal menor:");
    scanf("%f", &d);
    printf("\n");

    //diagnoral maior 

    printf("INforme a diagnoal maior em cm: ");
    scanf("%f", &D);
    printf("\n");

    //resultado
    printf("A área é %.2f cm² \n", (d*D)/2); 


    return 0;
}