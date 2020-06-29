#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c;
    printf("Digite a, b, c refenrntes aos valores da eq. de segundo grau: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(a==0){

    int delta ;
    delta = (b*b) - (4 * a * c);
    

    if( delta >=0){

        float raiz, raiz2; 
        int raiz_delta;
        raiz_delta = sqrt (delta);
        raiz =( (-b + raiz_delta) / 2 * a );
        raiz2 = ((-b - raiz_delta)/ 2*a);

    printf("%d", raiz_delta);

        /*

       if (raiz == raiz2){
           printf("A equação tem apenas 1 resultado : %f", raiz);
       } else{
           printf("A euqeção tem as seguintes raizes : %f e %f", raiz , raiz2);
       }
        




    } else {
        printf("A equação não tem raiz");
    }*/
    }
    }
    return 0; 
}
    
