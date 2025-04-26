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

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Olá, vamos iniciar o desafio das cartas do Super trufo!\n");
    printf("Vamos iniciar cadastrando as cartas.\n");
    printf("---------------------------------------\n");

    printf("** Carta 01 **\n");
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
    printf("** Carta 01 **\n População: %lld\n Área: %.2f\n PIB: %.2f\n Pontos turísticos: %d\n Densidade populacional: %.2f\n PIB per capta: %.2f\n", populacao1, area1, pib1, pontos_turisticos1, denspop1, pibpc1);
    printf("---------------------------------------\n");
    printf("** Carta 02 **\n População: %lld\n Área: %.2f\n PIB: %.2f\n Pontos turísticos: %d\n Densidade populacional: %.2f\n PIB per capta: %.2f\n", populacao2, area2, pib2, pontos_turisticos2, denspop2, pibpc2);
    printf("---------------------------------------\n");
    
    
    //comparação das cartas
    int comp_populacao, comp_area, comp_pib, comp_pontosturisticos, comp_densidade, comp_pibpercapta, comp_superpoder;
    float superpoder1, superpoder2;

    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + (1/denspop1) + pibpc1;
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + (1/denspop2) + pibpc2;

    comp_populacao = populacao1 > populacao2;
    comp_area = area1 > area2;
    comp_pib = pib1 > pib2;
    comp_pontosturisticos = pontos_turisticos1 > pontos_turisticos2;
    comp_densidade = denspop1 < denspop2;
    comp_pibpercapta = pibpc1 > pibpc2;
    comp_superpoder = superpoder1 > superpoder2;

    //exibição das cartas comparadas
    printf("*** Comparação das cartas ***\n");
    printf("# Se o resultado for (1) a carta 01 vence #\n");
    printf("# Se o resultado for (0) a carta 02 vence #\n");
    printf("  População: %d\n", comp_populacao);
    printf("  Área: %d\n", comp_area);
    printf("  PIB: %d\n", comp_pib);
    printf("  Pontos turísticos: %d\n", comp_pontosturisticos);
    printf("  Densidade populacional: %d\n", comp_densidade);
    printf("  PIB per capta: %d\n", comp_pibpercapta);
    printf("  Super poder: %d\n", comp_superpoder);
    printf("---------------------------------------\n");


    return 0;
}
