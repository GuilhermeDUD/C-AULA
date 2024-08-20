#include <stdio.h>
/*
    funcao principal
*/

main()
{

    int idade = 30; // declarando e inicializando variaveis
    int qtdFilhos = 2;
    float peso = 50.5;
    char nome[20] = "Ana";

    // apresentação das variaveis concatenando com o texto

    printf("Bem vinda %s cuja idade é %i filhos e pesa %.f",nome,idade,qtdFilhos,peso);
}

