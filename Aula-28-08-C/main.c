#include <stdio.h>

int main(){
    int alvo = 1234;
    int chute;

    printf("Chute um numero: ");
    scanf("%d", &chute);

    if (chute == alvo) {
        printf("\n Voce acertou!");
    } 
    else if (chute > alvo) {
            printf("Voce errou! Dica o numero certo e menor.");
    }
    else {
            printf("Voce errou! Dica o numero certo e maior.");
    }

    
    return 0;
}