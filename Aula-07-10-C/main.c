#include <stdio.h>

#define MAX_CHARS_NOME (124)
#define NUM_DE_ALUNOS (2)

int main()
{
    char nome[NUM_DE_ALUNOS][MAX_CHARS_NOME]; //matriz
    int matricula[NUM_DE_ALUNOS];
    int i = 0;
    int j;

    // Cadastro de alunos
    for (i = 0; i < NUM_DE_ALUNOS; i++)
    {
        printf("\nCadastro do aluno %d:\n",i);

        // Nome do aluno
        printf("Nome: ");
        scanf("%s", nome[i]);

        // Matricula do aluno
        printf("Matricula do Aluno: ");
        scanf("%d", &matricula[i]);
    }

    // Lista de Alunos cadastrados
    printf("\nLista de alunos cadastrados:\n");
    for (j = 0; j < NUM_DE_ALUNOS; j++)
    {
        printf("%d Nome: %s Matricula: %d\n", j + 1, nome[j], matricula[j]);
    }

    //Verificar a turma
    if (i == NUM_DE_ALUNOS)
    {
        printf("Turma cheia, Nao e possivel entrar mais.\n");
    }

    return 0;
}