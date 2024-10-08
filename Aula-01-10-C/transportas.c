#include <stdio.h>

#define NUM_DE_LINHAS (10)
#define NUM_DE_COLUNAS (10)

int main()
{
  float matrix[NUM_DE_LINHAS][NUM_DE_COLUNAS];
  float transposta[NUM_DE_LINHAS][NUM_DE_COLUNAS];
  int linha, coluna;
  int nlinhas, ncolunas;

  printf("\n Insira o numero de linhas:");
  scanf("%i", &nlinhas);

  printf("\n Insira o numero de colunas:");
  scanf("%i", &ncolunas);


  for (linha = 0; linha < nlinhas; linha++)
  {
    printf("\n Varredura os elementos na linha %d", linha);
    for (coluna = 0; coluna < ncolunas; coluna++)
    {
      printf("\n Insira o valor para a posicao [%d][%d]: ", linha, coluna);
      scanf("%f", &matrix[linha][coluna]);
      transposta[coluna][linha] = matrix[linha][coluna];
    }
  }

  for (linha = 0; linha < nlinhas; linha++)
  {
    printf("\n");
    for (coluna = 0; coluna < ncolunas; coluna++)
    {
      printf("%.0f ", matrix[linha][coluna]);
    }
  }

  for (linha = 0; linha < ncolunas; linha++)
  {
    printf("\n");
    for (coluna = 0; coluna < nlinhas; coluna++)
    {
      printf("%.0f ", transposta[linha][coluna]);
    }
  }
}