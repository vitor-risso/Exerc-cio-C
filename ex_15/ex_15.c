#include <stdio.h>


int main(){

    int a, b, c, d;
    a=b=c=d=0;

    printf("Digite quatros valores apertando enter entre eles\n");
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);

    if ((a > b) && (b > c) && (c > d)){

        printf("%i , %i , %i , %i \n", d , c , b , a ) ;
        
    }else{

        if((d > c) && (c > b) && (b > a)){

            printf("%i , %i , %i , %i \n", a , b, c , d);
        }else {

            if((c > d) && (d > b) && (b>a)){

                printf("%i , %i , %i , %i", a , b , d , c);
            }else{

                if((d>b) && (b>c) && (c>a)){

                    printf("%i , %i , %i , %i", a , c , b ,d);
                }else{

                    if(){

                        printf("%i , %i , %i , %", )
                    }
                }
            }
        }
    }

}