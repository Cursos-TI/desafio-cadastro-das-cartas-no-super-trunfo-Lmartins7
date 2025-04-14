#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area1, pib1, area2, pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Olá, vamos iniciar o desafio das cartas do Super trufo!\n");
    printf("Vamos iniciar cadastrando as cartas.\n");
    printf("Para a carta 01:\n");
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Para a carta 02:\n");
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
printf("Obrigado por cadastrar as cartas!\n");
printf("A primeira carta cadastrada foi:\n");
printf("Carta 01:\n População: %d\n Área: %f\n PIB: %f\n Pontos turísticos: %d\n", populacao1, area1, pib1, pontos_turisticos1);
printf("Carta 02:\n População: %d\n Área: %f\n PIB: %f\n Pontos turísticos: %d\n", populacao2, area2, pib2, pontos_turisticos2);
    return 0;
}
