#include <stdio.h>

int main(){

    int num;
    printf("Digite um número entre -9 e 9: ");
    scanf("%d", &num);

        switch (num){
            case -9:
                printf("Menos nove\n");
                break;

            case -8:
                printf("Menos oito");
                break;
            
            case -7:
                printf("Menos sete\n");
                break;

            case -6:
                printf("Menos seis\n");
                break;
            
            case -5:
                printf("Menos cinco\n");
                break;

            case -4:
                printf("Menos quatro\n");
                break;

            case -3:

                printf("Menos três\n");
                break;

            case -2:
                printf("Menos dois\n");
                break;

            case -1:
                printf("Menos um\n");
                break;

            case 0:
                printf("Zero\n");
                break;

            case 1:
                printf("Um\n");
                break;

            case 2:
                printf("Dois\n");
                break;

            case 3:
                printf("Três\n");
                break;
            
            case 4:
                printf("Quatro\n");
                break;
        
            case 5:
                printf("Cinco\n");
                break;
            
             case 6:
                printf("Seis\n");
                break;
            
             case 7:
                printf("Sete\n");
                break;

             case 8:
                printf("Oito\n");
                break;

             case 9:
                printf("Nove\n");
                break;

            default:
                printf("Número mão válido.\n");
                break;

            
        }

    return 0;
}