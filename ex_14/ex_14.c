#include <stdio.h>

int main(){

    int v1, v2, v3;

    v1 = v2 = v3 = 0;

    printf("Digite tres valores apertando enter entre um e outro \n");
    scanf("%i", &v1);
    scanf("%i", &v2);
    scanf("%i", &v3);

    if ( (v1 > v2) &&  (v2 > v3)){

        printf("%i , %i , %i \n", v3 , v2 , v1 );

    } else{
        if ((v2 > v1) && ((v1 > v3)) )
        {

            printf("%i , %i , %i \n", v3 , v1 , v2);

        }else{
            if ((v3 > v1) && (v1 > v2)){

                printf("%i , %i , %i \n", v2 ,v1 ,v3);

            } else{
                if ((v1 > v2) &&  (v2 < v3)){

                    printf("%i , %i , %i \n", v3 , v2 , v1);

                } else {
                    if((v2 > v1) && ((v1 < v3))){

                        printf("%i , %i , %i \n", v1 , v2 , v3);

                    } else{
                        if((v3 > v1) && (v1 < v2)){
                            printf("%i , %i , %i \n", v2 , v1 , v3 );
                        }
                    }
                }
            }
        }
    }


    return 0;
}