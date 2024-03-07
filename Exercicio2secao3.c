#include<stdio.h>

int main(){

   //Peça ao usuário para digitar três valores inteiros e imprima a soma deles. 

  int ValorA, ValorB, ValorC, soma;

  printf("Digite o valor de A:\n");
  scanf("%d", &ValorA);
  printf("Digite o valor de B:\n");
  scanf("%d", &ValorB);
  printf("Digite o valor de C:\n");
  scanf("%d", &ValorC);

  soma = ValorA + ValorB + ValorC;

  printf("A soma dos tres valores e de %d", soma);

}