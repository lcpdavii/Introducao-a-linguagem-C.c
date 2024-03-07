#include<stdio.h>

int main(){
  // Leia um número e imprima o resultado do quadrado deste número

  int numero, quadrado;

  printf("Digite um numero:\n");
  scanf("%d", &numero);

  quadrado = numero * numero;

  printf("O quadrado do numero %d e %d", numero, quadrado);
}