#include <stdio.h>


int main (){

    float temperatura;
    printf("\n\nDigite um valor em Kelvin para serta transformado para Celsius: ");
    scanf("%f", &temperatura);

    printf("\nA temperatura em Celsius são: >>> %.2f °C\n\n", ((temperatura/1.8) - 275.15)); 




    return 0;
}


/*
Faça um programa em C que converta temperaturas expressas em graus Celsius para graus Kelvin. Seu programa deve solicitar a digitação do valor a ser convertido (C). A relação entre graus Celsius e graus Rankine é C = (R/1.8) – 275,15.
*/