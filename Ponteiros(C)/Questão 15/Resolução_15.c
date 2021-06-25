#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare( float a, float b)
{
  return(a-b);
}

void crescente(int n, float *vet, int (*compare)(float, float))
{
    
    for(int i = 0; i < n-1; i++)
    {
      for( int j = i + 1; j < n; j++)
      {
        if(compare(vet[i], vet[j]) > 0) 
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
   clock_t t;

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
   t = clock();
   crescente(n, vet, compare);
   t = clock() - t;
   for(int i = 0; i < n; i++)
   {
     printf("%.2f ", vet[i]);
   }
   free(vet);
  printf("\nTempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
  return 0;
}


