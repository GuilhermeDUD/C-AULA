#include <stdio.h>
#include <string.h>

#define MAX_SITES 5
 //HEAP
char sites[MAX_SITES][50];
char nomesUsuarios[MAX_SITES][20];
char senhas[MAX_SITES][20];
int numeroSites = 0;

int adicionarSites() {

    //STACK
    if (numeroSites >= MAX_SITES) {
        printf("Limite de sites atingido.\n");
        return 0;
    }
    
    printf("Digite o site: ");
    scanf("%s", sites[numeroSites]);
    printf("Digite seu usuario: ");
    scanf("%s", nomesUsuarios[numeroSites]);
    printf("Digite sua senha: ");
    scanf("%s", senhas[numeroSites]);
    numeroSites++;
    return 1;
}

int consultarSites() {
    printf("Digite o site: ");
    char site[50];
    scanf("%s", site);
    
    for (int i = 0; i < numeroSites; i++) {
        if (strcmp(sites[i], site) == 0) { // Correção aqui
            printf("Nome de usuario: %s\n", nomesUsuarios[i]);
            printf("Senha: %s\n", senhas[i]);
            return 1;
        }
    } 

    printf("Site não encontrado.\n");
    return 0;
}

int main() {
    printf("Opções:\n");
    printf("1. Adicionar site\n");
    printf("2. Consultar site\n");
    int opcoes;
    scanf("%d", &opcoes); // Correção aqui

    if (opcoes == 1) { // Correção aqui
        if (adicionarSites() == 1) { // Correção aqui
            printf("Site adicionado com sucesso.\n");
        } else {
            printf("Erro ao adicionar site.\n");
        }
    } else if (opcoes == 2) { // Correção aqui
        if (consultarSites() == 1) { // Correção aqui
            printf("Site encontrado com sucesso.\n");
        } else {
            printf("Erro ao consultar site.\n");
        }
    }

    return 0;
}
