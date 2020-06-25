#include <stdio.h>
#include <math.h>




int main(){

    int a, b, c;

        printf("Digite 3 valores em cm: \n");
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

       int cond = a - b;
        cond = abs(cond);

        int cond2 = a - c;
        cond2 = abs(cond2);

        int cond3 = b - c;
        cond3 = abs(cond3);


        if( (a != 0) && (b != 0) &&(c != 0)){
            
            if((a + b > c) && (b + c >a) && (a + c > b) && (cond < c )  && ( cond2 < b) && (cond3 < a) ){

                printf("O triângulo pode ser formado\n");
                
            } else {
                 printf("O triângulo não pode ser formado\n");
            }



        }  else {
               printf("O triângulo não pode ser formado\n");

        }

    


    return 0;
}