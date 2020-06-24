#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia, mes, ano;

    //recolhendo dados

    printf("Digite o dia ");
    scanf("%i", &dia);

    printf("Digite o mês ");
    scanf("%i", &mes);

    printf("Digite o ano ");
    scanf("%i", &ano);


    //analise 

    if( (mes ==1) || (mes ==3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)  && (dia < 32) ){
        printf("Essa data é válida");

    } else{
        if((mes == 2) && (dia >= 1) && (dia<=29) && (ano % 4 ==0)){
            printf("Essa data é válida \n");

        } else {
            if (mes == 2 && (dia >= 1) && (dia <=20)){

                printf("Essa data é válida"); 

            } else {
                if((mes == 4) || (mes == 6) || (mes ==9) || (mes ==11) && (dia >=1) && (dia <=30)){

                    printf("Essa data é válida \n");
                }
            }
        }
    }



    return 0;
}