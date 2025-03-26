#include <stdio.h>

int main() {

    // declarando as variáveis do jogo
    char estado1;
    char codigo_carta1[4] = "01";
    char nome_cidade1[40];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int n_pontos_turisticos1; // numero de pontos turísticos
    float densidade_populacional1;
    float pib_per_capta1;
    long double super_poder_carta1;

    char estado2;
    char codigo_carta2[4]= "02";
    char nome_cidade2[40];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int n_pontos_turisticos2; // numero de pontos turísticos
    float densidade_populacional2;
    float pib_per_capta2;
    long double super_poder_carta2;


    printf("SEJA BEM VINDO AO SUPER TRUNFO!\n");
    printf("Nesse jogo você poderá cadastrar uma cidade, sua população, área em km², PIB e número de pontos turísticos.\n\n");

    // Cadastrando dados da carta número 1
    printf("Vamos cadastrar nossa primeira carta.\n");

    printf("Digite a letra do seu estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("Qual a população da cidade? \n");
    scanf("%d", &populacao1);

    printf("Área da cidade em km²: \n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade (em bilhões de reais)? \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos da cidade: \n\n");
    scanf("%d", &n_pontos_turisticos1);

    // Calculando a Densidade Populaciona da cidade para primeira carta
    densidade_populacional1 = (float) (populacao1 / area1);

    // Calculando o PIB per capta da cidade
    // pib1 * 1000000000 converte de bilões para reais
    pib_per_capta1 = (pib1 * 1000000000) / populacao1;

    // Calculando o super poder da carta 1
    super_poder_carta1 = (long double)(populacao1 + area1 + pib1 + n_pontos_turisticos1 + pib_per_capta1 + densidade_populacional1);

    // Exibindo dados da carta número 1
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n",estado1, codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", n_pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capta1);

    // Cadastrando dados da carta número 2
    printf("Vamos cadastrar nossa segunda carta.\n");

    printf("Digite a letra do seu estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Qual a população da cidade? \n");
    scanf("%d", &populacao2);

    printf("Área da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade (em bilhões de reais)? \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos da cidade: \n");
    scanf("%d", &n_pontos_turisticos2);

    // Calculando a Densidade Populaciona da cidade para primeira carta
    densidade_populacional2 = (float) (populacao2 / area2);

    // Calculando o PIB per capta da cidade
    // pib1 * 1000000000 converte de bilões para reais
    pib_per_capta2 = (pib2 * 1000000000) / populacao2;

    // Calculando o super poder da carta 2
    super_poder_carta2 = (long double)(populacao2 + area2 + pib2 + n_pontos_turisticos2 + pib_per_capta2 + densidade_populacional2);


    // Exibindo dados da carta número 2
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n",estado2, codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n", n_pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capta2);

    // Comparando as Cartas e exibindo qual delas venceu
    printf("Comparação de cartas (Atributo: PIB):\n");
    if (pib1 > pib2) {
        printf("Carta 1 - %s:\n", nome_cidade1);
        printf("Carta 2 - %s:\n", nome_cidade2);
        printf("Resultado: Carta 1 (%s venceu!)\n", nome_cidade1);
    } else {
        printf("Carta 1 - %s:\n", nome_cidade1);
        printf("Carta 2 - %s:\n", nome_cidade2);
        printf("Resultado: Carta 2 (%s venceu!)\n", nome_cidade2);
    }

    return 0;
}
