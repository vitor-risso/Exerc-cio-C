#include <stdio.h>
#include <stdlib.h>

int main(){

    int operation; 
    float temperatura;

    printf("Escolha sua operação \n");

    printf("(1) Celsius para Fareinheit \n");
    printf("(2) Fareinheit para Celsius \n");
    printf("(3) Celsius para Kelvin \n");
    printf("(4) Kelvin para Celsius \n");
    printf("(5) Celsius para Rankine \n");
    printf("(6) Rankine para Celsius \n");

    scanf("%d", &operation);

    printf("Digite o valor da temperatura: ");
    scanf("%f", &temperatura);
    printf("\n");

    if (operation == 1){

        printf("A temperatura desejada é de %.2f \n", (temperatura * 9 / 5) +32 );

    } else{
        if (operation == 2) {

           printf("A temperatura desejada é de %.2f\n", (temperatura - 32) * 5/9);

        }else{

            if (operation == 3){

                 printf("A temperatura desejada é de %.2f \n", temperatura + 275.15);


            } else{

                if (operation ==4 ){

                     printf("A temperatura desejada é de %.2f \n", temperatura - 275.15);

                } else {
                    if (operation ==5){

                         printf("A temperatura desejada é de %.2f \n", temperatura * 1.8 + 275.15);

                    }else {
                        if (operation == 6){

                             printf("A temperatura desejada é de %.2f \n", temperatura / 1.8 - 275.15);
                        }
                    }
                }
            }

        }
    }
  
    


    return 0;
}