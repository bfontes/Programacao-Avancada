#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 //funcao parar comparar os valores dentro do vetor
 int compare (const void * a, const void * b)
{
  //retornando a diferenca entre os valores; menor que 0, igual a 0 ou maior que 0
  return ( *(float*)a - *(float*)b );
}

int main() 
{
  //criando a variavel do vetor
   float *vet;
   //criando a variavel que vai receber o tamanho do vetor
   int n;
  //criando a variavel para o tempo
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
   //chamando a variavel do tempo
   t = clock();
   //chamando a funcao que faz a ordenacao
   qsort(vet, n, sizeof(float), compare);
   t = clock() - t;

   //imprimindo na tela os valores do vetor de forma ordenada
   for(int i = 0; i < n; i++)
   {
     printf("%.2f ", vet[i]);
   }
   //liberando o espaco da memoria alocado pelo vetor
   free(vet);
   printf("\nTempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));

}
