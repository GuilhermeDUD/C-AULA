#include <stdio.h>
#include <string.h>

int main()
{
    char nome_auto[] = "Guilherme";
    char nome_inserido[50];

    printf("\n Digite seu nome de usuario:");
    scanf("%s", nome_inserido);

    if (strcmp(nome_inserido, nome_auto) == 0)
    {
        printf("Bem vindo!\n%s", nome_inserido);
    }

    else
    {
        printf("Nome incorreto! \n");
    }

    return 0;
}