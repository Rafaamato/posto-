#include <stdio.h>


int main() {
  printf("Programa de Rafaela Maria Amato Santos Moreira\n");
  printf("\nO objetivo desse programa é apresentar o valor de um combustível e o tamanho da fila suportada pelo estabelecimento, solicitados pelo usuario.\n");
  
  float valor;
  printf("\nInforme o valor do combusível (use o ponto, não a virgula. ex.: 3.5):  ");
  scanf("%f", &valor);
  
  int capacidade;
  printf("\nInforme a capacidade da fila suportada pelo estabelecimento: ");
  scanf("%d", &capacidade);
  
  printf("O valor do combustível é de %.2f e a capacidade de fila nesse estabelecimento é de %d automóveis", valor, capacidade);

   float litros;
  printf("\n\nInforme a quantidade de litros presente no tanque:");
  scanf("%f", &litros);
  
  int opcao;
  printf("\n\n\nMenu principal, escolha uma opção:\n");
  printf("1- adicionar um carro na fila.\n");
  printf("2- abastecer.\n");
  printf("3- exibir carros na fila de espera.\n");
  printf("4- relatórios.\n");
  printf("5- encerrar.\n");

  int carro = 0;
  char opc;
  while (opcao != 5){
    system("clear");
    printf("--- carros na fila: %d\n", carro);
    printf("--- capacidade de carros na fila: %d", capacidade);
    printf("--- vagas restantes: %d", (capacidade - carro));
    printf("--- litros no tanque: %.2f\n", litros);
  printf("\nEscolha sua opção: (de 1 a 5) \n");
  scanf("%d",&opcao);
    if (opcao > 5)
     printf("Opção inválida. Tente novamente!");
    else {
      switch (opcao) {
      case 1:
        if (carro >= capacidade){
        printf("Desculpe, estamos com a capacidade máxima atingida. Logo será a sua vez. Por favor, aguarde um instante.");
        }
        else {
        printf("O carro foi adicionado!\n");
        carro = carro++;
        printf("O número de carros na fila é: %d", carro);
        }
      break;
      float litrosabas;
      case 2:
        if (carro == 0){
          printf("\nNão foi possível abastecer! (Dica: você precisa adicionar um carro na fila primeiro.)");
        }
        else {
        printf("\nQuantos litros deseja abastecer? ");
        scanf("%f", &litrosabas);        
        printf("O carro foi abstecido!\n");
        carro = carro - 1;
        printf("\nO número de carros na fila é: %d", carro);
        printf("\nQuantidade de litros restantes no tanque: %.2f", (litros - litrosabas);
       }
      break;
      case 3:
        printf("%d carros na fila.", carro);
      break;
      case 4:
        int opcao2;
        printf("Selecione uma opção: (apenas de 'a' a 'f'!!!) \n");
        printf("a- quantidade de litros vendida.\n");
        printf("b- valor total arrecadado com vendas.\n");
        printf("c- quantidade de carros atendida.\n");
        printf("d- quantidade de combustível restante no tanque. \n");
        printf("e- gerar arquivo para impressão. \n");
        printf("f- voltar ao menu anterior. \n");
        while (opcao2 != 'f'){
        switch (opcao2) {
          case 'a':
            printf("%.2f litros vendidos", litrosabas);
          break;
          case 'b':
            float lucro = 0;
            lucro = lucro + (litrosabas * valor);
            printf("%.2f é o valor arrecadado com as vendas.", lucro);
          break;
          case 'c':
            printf("%d carros atendidos.", carro);
          break;
          case 'd':
            printf("Arquivo gerado!");
          break;
          case 'f':
            printf("Voltando ao menu.");
          break;
          }  
        }
      break;
      case 5:
        printf("Programa encerrado. Obrigada!\n");
        break;
      }
    }
    getchar();
    getchar();
  }
  return 0;
}
