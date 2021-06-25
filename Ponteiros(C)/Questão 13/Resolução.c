#include <stdio.h>
#include <stdlib.h>

void crescente(int n, float *vet)
{

    for(int i = 0; i < n-1; i++)
    {
      for( int j = i + 1; j < n; j++)
      {
        if(vet[i] > vet[j])
        {
          float a = vet[i];
          vet[i] = vet[j];
          vet[j] = a;
        }
      }
    }
}

int main() 
{
   float *vet;
   int n;

  //pedindo para o usuario entrar com o tamanho do vetor
   scanf("%d", &n);

  //alocando dinamicamente o vetor
   vet = malloc(n * sizeof(float));

  //exibindo na tela o valor de uma posicao do vetor
  //printf("%.2f", vet[3]);

   for(int i = 0; i < n; i++)
   {
     //recebendo os valores das posicoes do vetor
      scanf("%f", &vet[i]);
   }
   crescente(n, vet);
   for(int i = 0; i < n; i++)
   {
     printf("%.2f ", vet[i]);
   }
   free(vet);
   return 0;

}
