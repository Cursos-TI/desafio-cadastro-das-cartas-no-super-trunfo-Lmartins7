#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    unsigned long long int populacao1, populacao2;
    unsigned int pontos_turisticos1, pontos_turisticos2;
    float area1, pib1, area2, pib2, denspop1, pibpc1, denspop2, pibpc2;
    char cidade1 [30], estado1 [5], cidade2 [30], estado2 [5];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Olá, vamos iniciar o desafio das cartas do Super trufo!\n");
    printf("Vamos iniciar cadastrando as cartas.\n");
    printf("---------------------------------------\n");

    printf("** Carta 01 **\n");
    printf("Digite o nome da cidade:");
    scanf("%s", cidade1);
    printf("Digite a sigla do estado (UF): ");
    scanf("%s", estado1);
    printf("Digite a População: ");
    scanf("%lld", &populacao1);
    printf("Digite a Área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("---------------------------------------\n");

    printf("** Carta 02 **\n");
    printf("Digite o nome da cidade:");
    scanf("%s", cidade2);
    printf("Digite a sigla do estado (UF): ");
    scanf("%s", estado2);
    printf("Digite a População: ");
    scanf("%lld", &populacao2);
    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("---------------------------------------\n");

    denspop1 = (float) populacao1 / area1;
    denspop2 = (float) populacao2 / area2;
    pibpc1 = (float) pib1 / populacao1;
    pibpc2 = (float) pib2 / populacao2;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Obrigado por cadastrar as cartas!\n");
    printf("As cartas cadastradas foram:\n");
    printf("---------------------------------------\n");
    printf("** Carta 01 **\n Cidade: %s (%s)\n População: %lld\n Área: %.2f\n PIB: %.2f\n Pontos turísticos: %d\n Densidade populacional: %.2f\n PIB per capta: %.2f\n", cidade1, estado1, populacao1, area1, pib1, pontos_turisticos1, denspop1, pibpc1);
    printf("---------------------------------------\n");
    printf("** Carta 02 **\n Cidade: %s (%s)\n População: %lld\n Área: %.2f\n PIB: %.2f\n Pontos turísticos: %d\n Densidade populacional: %.2f\n PIB per capta: %.2f\n", cidade2, estado2, populacao2, area2, pib2, pontos_turisticos2, denspop2, pibpc2);
    printf("---------------------------------------\n");
    
    
    //comparação e exibição das cartas

    printf("- - - COMPARAÇÃO DO VENCEDOR POR CATEGORIA - - -\n");
  
  if (populacao1 > populacao2){
    printf(" - POPULAÇÃO | A carta 01 [%s(%s)] venceu | \n", cidade1, estado1);
  }else{
    printf(" - POPULAÇÃO | A carta 02 [%s(%s)] venceu | \n", cidade2, estado2);
  }

  if (area1 > area2){
    printf(" - ÁREA | A carta 01 [%s(%s)] venceu | \n", cidade1, estado1);
  }else{
    printf(" - ÁREA | A carta 02 [%s(%s)] venceu | \n", cidade2, estado2);
  }

  if (pib1 > pib2){
    printf(" - PIB | A carta 01 [%s(%s)] venceu | \n", cidade1, estado1);
  }else{
    printf(" - PIB | A carta 02 [%s(%s)] venceu | \n", cidade2, estado2);
  }

  if (pontos_turisticos1 > pontos_turisticos2){
    printf(" - PONTOS TURÍSTICOS | A carta 01 [%s(%s)] venceu | \n", cidade1, estado1);
  }else{
    printf(" - PONTOS TURÍSTICOS | A carta 02 [%s(%s)] venceu | \n", cidade2, estado2);
  }

  if (denspop1 < denspop2){
    printf(" - DENSIDADE POPULACIONAL | A carta 01 [%s(%s)] venceu | \n", cidade1, estado1);
  }else{
    printf(" - DENSIDADE POPULACIONAL | A carta 02 [%s(%s)] venceu | \n", cidade2, estado2);
  }

  if (pibpc1 > pibpc2){
    printf(" - PIB PER CAPTA | A carta 01 [%s(%s)] venceu | \n", cidade1, estado1);
  }else{
    printf(" - PIB PER CAPTA | A carta 02 [%s(%s)] venceu | \n", cidade2, estado2);
  }
  printf("---------------------------------------\n");

    return 0;
}
