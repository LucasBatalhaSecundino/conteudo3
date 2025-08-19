#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int opcao;
  int numerosecreto, palpite;


  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      srand(time(0));
      numerosecreto = rand() % 10;
      printf("digite um número de 0 a 9\n");
      scanf("%d", &palpite);
      if (numerosecreto == palpite)
      {
        printf("Você acertou!!");
        printf("numero secreto %d\n", numerosecreto);
      } else {
        printf("você errou!!");
        printf("numéro secreto %d\n", numerosecreto);
      }
      
      printf("Número secreto %d\n", numerosecreto);
      // Código para iniciar o jogo
      break;
    case 2:
      printf("Regras do Jogo:\n");
      printf("1. Regra 1\n");
      printf("2. Regra 2\n");
      printf("3. Regra 3\n");
      // Código para exibir as regras
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }


  return 0;
}