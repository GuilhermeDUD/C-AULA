#include <stdio.h>

int main (){
    int LadoA;
    int LadoB;
    int LadoC;

    printf("Insira o lado A do seu triangulo:");
    scanf("%d", &LadoA);

    printf("Insira o Lado B do seu triangulo:");
    scanf("%d", &LadoB);

    printf("Insira o Lado C do seu triangulo:");
    scanf("%d", &LadoC);

    //se o lado A = ao lado B = ao lado C esse triangulo e equilatero

    if ((LadoA == LadoB) && (LadoB == LadoC)){
        printf("Esse triangulo e equilatero");
    }
    else if ((LadoA == LadoB) || (LadoB == LadoC) || (LadoC == LadoA)){
        printf("Esse triangulo e isosceles");
    }
    else {
        printf("Esse triangulo e escaleno");
    }
}