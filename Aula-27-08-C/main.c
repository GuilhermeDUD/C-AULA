#include <stdio.h>

int main(){
    
    int num1, num2;
    float resultado_racional;
    
    printf("Insira um numero:");
    scanf("%d", &num1);

    printf("Insira um numero:");
    scanf("%d", &num2);

    if ((num1%num2) == 0) {

        printf("\n %d e %d são multiplos", num1,num2);
    
    }

    else {
        printf("\n %d e %d nao sao multiplos", num1,num2);
    }

    printf("Fim \n");

    return 0;
    
}