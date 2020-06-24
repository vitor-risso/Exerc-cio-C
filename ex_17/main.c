#include <stdio.h>
#include <stdlib.h>

int main(){

    int hora , minuto , segundo; 

    // peganod hora
    printf("Digite as horas ");
    scanf("%i", &hora);

    //pegando minuto
    printf("Digite os minutos ");
    scanf("%i", &minuto);
    
    //pegando segundo
    printf("Digite os segundos ");
    scanf("%i", &segundo);

    //avaliando
    if ((hora >= 0) && (hora <24) && (minuto >= 0) && (minuto < 60) && (segundo >=00) && (segundo <60) ) {
        printf("Este horário é válido \n\n");
    } else {
        printf("Este horário não é válido!! \n\n");
    }

    return 0;
}