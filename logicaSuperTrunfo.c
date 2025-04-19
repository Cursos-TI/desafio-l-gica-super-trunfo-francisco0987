#include <stdio.h>

int main() {
    // Variáveis para Carta 1
    char estado1;
    char codigo_carta1[4] = "01";
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Variáveis para Carta 2
    char estado2;
    char codigo_carta2[4] = "02";
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Entrada de dados da Carta 1
    printf("SEJA BEM-VINDO AO SUPER TRUNFO!\n");
    printf("Nesse jogo você poderá cadastrar uma cidade, sua população, área em km², PIB e número de pontos turísticos.\n\n");

    printf("Vamos cadastrar nossa primeira carta.\n");

    printf("Digite a letra do seu estado: ");
    scanf(" %c", &estado1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Qual a população da cidade? ");
    scanf("%lu", &populacao1);

    printf("Área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade (em bilhões de reais)? ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // Entrada de dados da Carta 2
    printf("\nVamos cadastrar nossa segunda carta.\n");

    printf("Digite a letra do seu estado: ");
    scanf(" %c", &estado2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Qual a população da cidade? ");
    scanf("%lu", &populacao2);

    printf("Área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade (em bilhões de reais)? ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibindo dados da Carta 1
    printf("\n========= Carta 1 =========\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo_carta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibindo dados da Carta 2
    printf("\n========= Carta 2 =========\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo_carta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos atributos
    printf("\n========= Comparação de Cartas =========\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
