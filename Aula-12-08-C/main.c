#include <stdio.h>

/*funcao principal*/

main(){
    
    int qtdFilhos = 2;
    int idade = 30; //declarando e iniializando variaveis
    float peso = 50.5;
    char nome[20] = "Maria"; 
    //apresentação das variaveis concatenando com texto
    printf("Bem vinda %s cuja idade é %i, tem %i filhos e pesa %.3f" nome,idade,qtdFilhos,peso);
}