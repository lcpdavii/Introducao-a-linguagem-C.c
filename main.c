#include <stdio.h>

int main() { //A chave{} delimita um bloco de codigo (inicio do bloco)
  
  //Nessa parte, ira declarar uma variavel
  int idade;

  //Vai ter momentos que voce ira declarar e inicializar a variavel, ex: 
  //int idade = 0, nesse =0 ele ja esta declarando;

  //Funcao para escrever algo na saida padrao(console)
  printf("Qual sua idade:\n");//O ponto e virgula finaliza um comando

  //Receber dados 
  scanf("%d", &idade);

  //Saida do dado
  printf("Sua idade e %d", idade);

  //Sempre, assim que terminar o codigo, coloque o return 0;
  return 0;
} //(fim do bloco)

//Na programação, tudo que esta em aspas duplas"", é considerado uma string