#include <stdio.h>

main()
{
    char nome[10];
    int idade;
    float peso;
    float altura;
    

    printf("Digite o seu nome:\n");
    scanf("%s", nome);

    printf("Digite a sua idade:\n");
    scanf("%i", &idade);

    printf("Digite seu peso:\n");
    scanf("%f", &peso);

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    float imc = peso/(altura*altura);

    printf("Seu nome e %s, sua idade %i, seu IMC e: %f", nome,idade,imc);
}