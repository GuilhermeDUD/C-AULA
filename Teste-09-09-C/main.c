#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero_sorteado;
    int palpite;
    int tentativa = 0;
    int jogar_novamente;

    srand(time(NULL));

    while (1)
    {
        numero_sorteado = 1 + (rand() * (16 - 1) + RAND_MAX / 2) / RAND_MAX;

        tentativa = 0;
        while (tentativa < 4)
        {
            printf("Um Numero foi sorteado\n");
            printf("Digite seu palpite, %d.\n", tentativa + 1);
            scanf("%d", &palpite);

            if (palpite == numero_sorteado)
            {
                printf("Voce acertou\n");
                break;
            }
            else if (palpite < numero_sorteado)
            {
                printf("Dica: o numero e maior que %d.\n", palpite);
            }
            else
            {
                printf("Dica: o numero e menor que %d.\n", palpite);
            }

            tentativa++;
        }

        if (tentativa == 4)
        {
            printf("Voce nao acertou. O numero sorteado era %d.\n", numero_sorteado);
        }

        printf("Deseja jogar novamente? (1-Sim, 0-Nao)\n");
        scanf("%d", &jogar_novamente);

        if (jogar_novamente == 0)
        {
            printf("Obrigado por jogar!\n");
            break;
        }
    }

    return 0;
}