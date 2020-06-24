#include <stdio.h>

int main(){
    int x, y;
    x=y=0;


    printf("Digite o primeiro valor: ");
    scanf("%i", &x);
    printf("\n");

    printf("Digite o segundo valor: ");
    scanf("%i", &y);
    printf("\n");

    if (x > y){

    printf("%i ,", y);
    printf(" %i\n", x);


    } else{
        if ( x < y) { 
             printf("%i ,", x);
             printf(" %i\n", y);

        } 
    }

  

    return 0;
}