#include <stdio.h>


int main(){

    float a, b, c;

    printf("Digite os valores de 3 angulos: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(a + b + c == 180 ){
        if((a < 90) && (b < 90) && (c < 90)){

            printf("Acutângulo\n");
        }else{
            if ((a == 90) || ( b == 90) || (c ==90)){
                printf("Retângulo\n");
            }else{
                if ((a > 90) || (b > 90) || (c >90)){

                    printf("Obtusângulo\n");
                }
            }
        }


        
    }else{
        printf("Não pode ser formado um triângulo\n");
    }

    return 0;
}