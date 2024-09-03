#include <stdio.h>

int main(){
    int repeticoes;
    char nome [64];
    int idade;
    float altura;

    repeticoes = 0;
    while (repeticoes < 3)
    {
        printf("\n Digite o seu nome: ");
        scanf("%s", nome);
        printf("\n Digite sua idade:");
        scanf("%d", idade);
        printf("\n Digite a sua altura:");
        scanf("%f", altura);

        repeticoes++;
    }
    
    printf("\n fim");
    fflush(stdout);
    return 0;


}