#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    printf(" --- Obrigado por cadastrar as cartas! --- \n");
    //printf(" - As cartas cadastradas foram: - \n");
    //printf("---------------------------------------\n");
    //printf("** Carta 01 **\n Cidade: %s (%s)\n População: %lld\n Área: %.2f\n PIB: %.2f\n Pontos turísticos: %d\n Densidade populacional: %.2f\n PIB per capta: %.2f\n", cidade1, estado1, populacao1, area1, pib1, pontos_turisticos1, denspop1, pibpc1);
    //printf("---------------------------------------\n");
    //printf("** Carta 02 **\n Cidade: %s (%s)\n População: %lld\n Área: %.2f\n PIB: %.2f\n Pontos turísticos: %d\n Densidade populacional: %.2f\n PIB per capta: %.2f\n", cidade2, estado2, populacao2, area2, pib2, pontos_turisticos2, denspop2, pibpc2);
    printf("---------------------------------------\n");

   //LOGICA DE COMPARAÇÂO
   int jogador, carta_jogador, carta_maquina;

   printf(" *** VAMOS JOGAR SUPER TRUNFO ***\n");
   printf(" - Com qual carta voce vai jogar? \n");
   printf(" - Digite 1 ou 2 para escolher a carta: ");
   scanf("%d", &carta_jogador);

   if (carta_jogador == 1){
    (carta_maquina == 2);
   }else if (carta_jogador == 2){
    (carta_maquina == 1);
   }else {
    printf("Opcão invalida.\n");
    return 0;
   }

  switch (carta_jogador){
    case 1:
    printf("---------------------------------------\n");
    printf(" - A carta escolhida foi: ** Carta 01 ** \n");
    printf("  - ** Escolha o atributo a ser comparado com a carta do computador ** - \n");
    printf("  - Verifique sua carta e escolha um numero referente ao atributo  - \n");
    printf("** Carta 01 **\n Cidade: %s (%s)\n 1 - População: %lld\n 2 - Área: %.2f\n 3 - PIB: %.2f\n 4 - Pontos turísticos: %d\n 5 - Densidade populacional: %.2f\n 6 - PIB per capta: %.2f\n", cidade1, estado1, populacao1, area1, pib1, pontos_turisticos1, denspop1, pibpc1);
    printf("---------------------------------------\n");
    break;
    case 2:
    printf(" - A carta escolhida foi: ** Carta 02 ** \n");
    printf(" ** Escolha o atributo a ser comparado com a carta do computador ** \n");
    printf(" Verifique sua carta e escolha um numero referente ao atributo \n");
    printf("---------------------------------------\n");
    printf("** Carta 02 **\n Cidade: %s (%s)\n 1 - População: %lld\n 2 - Área: %.2f\n 3 - PIB: %.2f\n 4 - Pontos turísticos: %d\n 5 - Densidade populacional: %.2f\n 6 - PIB per capta: %.2f\n", cidade2, estado2, populacao2, area2, pib2, pontos_turisticos2, denspop2, pibpc2);
    printf("---------------------------------------\n");
    break;
    default:
    printf(" ** Opção invalida. ** \n");
    }
 
   printf(" - Digite o atributo escolhido:"); 
   scanf("%d", &jogador);

  switch (jogador){
   case 1:
    printf("Voce escolheu: 'População'\n");
    if (carta_jogador == 1){
    printf("Sua carta = %lld | Carta do computador = %lld\n", populacao1, populacao2);
    if (populacao1>populacao2){
      printf(" ** Voce venceu! ** \n");
    }else if(populacao1<populacao2){
      printf(" ** Voce perdeu! ** \n");
    }else {
      printf(" ** Empate ** \n");}
    }else{
    printf("Sua carta = %lld | Carta do computador = %lld", populacao2, populacao1);
    if (populacao2>populacao1){
      printf(" ** Voce venceu! ** \n");
    }else if(populacao2<populacao1){
      printf(" ** Voce perdeu! ** \n");
    }else {
      printf(" ** Empate ** \n");}}
    break;

   case 2:
   printf("Voce escolheu: 'Área'\n");
   if (carta_jogador == 1){
   printf("Sua carta = %.2f | Carta do computador = %.2f\n", area1, area2);
   if (area1>area2){
     printf(" ** Voce venceu! ** \n");
   }else if(area1<area2){
     printf(" ** Voce perdeu! ** \n");
   }else {
     printf(" ** Empate ** \n");}
   }else{
   printf("Sua carta = %.2f | Carta do computador = %.2f", area2, area1);
   if (area2>area1){
     printf(" ** Voce venceu! ** \n");
   }else if(area2<area1){
     printf(" ** Voce perdeu! ** \n");
   }else {
     printf(" ** Empate ** \n");}}
    break;
   }}