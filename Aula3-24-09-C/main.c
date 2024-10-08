#include <stdio.h>
#include <string.h>

int main() {
    char inserido[] = "Guilherme";
    char login[20];  
    char segredo[] = "Seu saldo e de 1000";
    char negado[] = "Acesso negado";
    
    printf("\nDigite seu nome de usuario: ");
    scanf("%19s", login);  

    if (strcmp(inserido, login) == 0) {
        printf("Bem vindo, %s! %s\n", login, segredo);
    } else {
        printf("%s\n", negado);
    }

    return 0;
}
