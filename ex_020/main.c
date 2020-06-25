#include <stdio.h>
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

                if((a == b) || (a == c) || (b ==c )){

                    printf("O triângulo pode ser formado\n");
                    printf("O triângulo é isoceles");
                }else {
                    if (a == b == c) {
                        printf("O triângulo pode ser formado\n");
                        printf("O triângulo é equilatero");

                    } else{
                        if ( (a != b) && (b!=c) && (c!= a)) {

                        printf("O triângulo pode ser formado\n");
                        printf("O triângulo é escaleno");}
                    }
                }

                
                
            } else {
                 printf("O triângulo não pode ser formado\n");
            }



        }  else {
               printf("O triângulo não pode ser formado\n");

        }

    


    return 0;
}