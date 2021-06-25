#include <stdio.h>

int soma(int a, int b)
{
  return a+b;
}

int main() 
{
  //tipo de retorno da funcao
  //ponteiro (*nome)
  //tipos de parametros da funcao
  //endereco da funcao
  int (*pf)(int,int) = &soma;

  printf("%d\n",pf(3,3));

  return 0;
}
