#include <stdio.h>

int main() {

    // =========================
    // Variáveis da Carta 1
    // =========================

    char estado1;
    char codigo_Carta1[4];
    char cidade1[20];
    int populacao1;
    float area_Km1;
    float pib1;
    int num_Pontos_Turisticos1;
    float densidade1;
    float pibPerCapta1;
    float superPoder1;

    // =========================
    // Variáveis da Carta 2
    // =========================

    char estado2;
    char codigo_Carta2[4];
    char cidade2[20];
    int populacao2;
    float area_Km2;
    float pib2;
    int num_Pontos_Turisticos2;
    float densidade2;
    float pibPerCapta2;
    float superPoder2;

    // =========================
    // Cadastro da Carta 1
    // =========================

    printf("___Preencha as informacoes da CARTA 1___\n");

    printf("Digite uma letra entre (A-H) que represente um Estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01, B03):\n");
    scanf("%s", codigo_Carta1);

    printf("Digite o nome da Cidade:\n");
    scanf(" %[^\n]s", cidade1);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em km²:\n");
    scanf("%f", &area_Km1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &num_Pontos_Turisticos1);

    // Cálculos Carta 1

    densidade1 = (float) populacao1 / area_Km1;

    pibPerCapta1 = (float) pib1 / populacao1;

    superPoder1 = (float) (
        populacao1 +
        area_Km1 +
        pib1 +
        num_Pontos_Turisticos1 +
        pibPerCapta1 +
        (1 / densidade1)
    );

    // =========================
    // Cadastro da Carta 2
    // =========================

    printf("\n___Preencha as informacoes da CARTA 2___\n");

    printf("Digite uma letra entre (A-H) que represente um Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01, B03):\n");
    scanf("%s", codigo_Carta2);

    printf("Digite o nome da Cidade:\n");
    scanf(" %[^\n]s", cidade2);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km²:\n");
    scanf("%f", &area_Km2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &num_Pontos_Turisticos2);

    // Cálculos Carta 2

    densidade2 = (float) populacao2 / area_Km2;

    pibPerCapta2 = (float) pib2 / populacao2;

    superPoder2 = (float) (
        populacao2 +
        area_Km2 +
        pib2 +
        num_Pontos_Turisticos2 +
        pibPerCapta2 +
        (1 / densidade2)
    );

    // =========================
    // Exibição Carta 1
    // =========================

    printf("\n===== CARTA 1 =====\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_Carta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area_Km1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", num_Pontos_Turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapta1);
    printf("Super Poder: %.2f\n", superPoder1);

    // =========================
    // Exibição Carta 2
    // =========================

    printf("\n===== CARTA 2 =====\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_Carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area_Km2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", num_Pontos_Turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapta2);
    printf("Super Poder: %.2f\n", superPoder2);

    // =========================
    // Comparações
    // =========================

    printf("\n===== COMPARACAO DE CARTAS =====\n");

    printf("Populacao: Carta 1 venceu (%d)\n",
           populacao1 > populacao2);

    printf("Area: Carta 1 venceu (%d)\n",
           area_Km1 > area_Km2);

    printf("PIB: Carta 1 venceu (%d)\n",
           pib1 > pib2);

    printf("Pontos Turisticos: Carta 1 venceu (%d)\n",
           num_Pontos_Turisticos1 > num_Pontos_Turisticos2);

    // Menor densidade vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n",
           densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n",
           pibPerCapta1 > pibPerCapta2);

    printf("Super Poder: Carta 1 venceu (%d)\n",
           superPoder1 > superPoder2);

    return 0;
}