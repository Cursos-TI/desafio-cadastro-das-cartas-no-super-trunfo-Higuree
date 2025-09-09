#include <stdio.h>

int main() {

    // Declaração das variáveis

    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;

    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    int escolha;  // Variável do menu interativo
    
    // Leitura dos dados da carta 1

    printf("Cadastro da carta1\n");

    printf("Digite o Estado de A-H:");
    scanf(" %c", &estado1);

    printf("Digite o Código da carta:");
    scanf("%s", codigo1);

    printf("digite o nome da cidade:");
    scanf("%s", cidade1);

    printf("Digite a população da cidade:");
    scanf("%lu", &populacao1);

    printf("Digite a Área da cidade em km²:");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade:");
    scanf("%d", &pontosturisticos1);

    // Cálculos e Exibições da carta 1

    densidade1 = (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;
    superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontosturisticos1 + pibpercapita1 + (1.0f / densidade1);
      printf("A densidade é: %.2f\n", densidade1);
    printf("O PIB per capita é: %.2f\n", pibpercapita1);

    // Leitura dos dados da carta 2

    printf("Cadastro da carta2\n");

    printf("Digite o Estado de A-H:");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta:");
    scanf("%s", codigo2);

    printf("digite o nome da cidade:");
    scanf("%s", cidade2);

    printf("Digite a população da cidade:");
    scanf("%lu", &populacao2);

    printf("Digite a Área da cidade em km²:");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:");
    scanf("%d", &pontosturisticos2);

    // Cálculos e Exibições da carta 2

    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontosturisticos2 + pibpercapita2 + (1.0f / densidade2);
    printf("A densidade é: %.2f\n", densidade2);
    printf("O PIB per capita é: %.2f\n", pibpercapita2);

    // Menu Interativo

    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Comparação da População\n");
        printf("%s: %lu habitantes\n", cidade1, populacao1);
        printf("%s: %lu habitantes\n", cidade2, populacao2);

        if (populacao1 > populacao2) {
            printf("Carta 1 Venceu!\n");
        } else if (populacao1 < populacao2) {
            printf("Carta 2 Venceu!\n");
        } else 
        printf("Empate!\n");
        break;
    case 2:
        printf("Comparação da Área\n");
        printf("%s: %.2f km²\n", cidade1, area1);
        printf("%s: %.2f km²\n", cidade2, area2);

        if (area1 > area2) {
            printf("Carta 1 Venceu!\n");
        } else if (area1 < area2) {
            printf("Carta 2 Venceu!\n");
        } else
        printf("Empate!\n");
        break;
    case 3:
        printf("Comparação do PIB\n");
        printf("%s: %.2f PIB\n", cidade1, pib1);
        printf("%s: %.2f PIB\n", cidade2, pib2);

        if (pib1 > pib2) {
            printf("Carta 1 Venceu!\n");
        } else if (pib1 < pib2) {
            printf("Carta 2 Venceu!\n");
        } else 
        printf("Empate!\n");
        break;
    case 4:
        printf("Comparação dos pontos turísticos\n");
        printf("%s: %d pontos\n", cidade1, pontosturisticos1);
        printf("%s: %d pontos\n", cidade2, pontosturisticos2);

        if (pontosturisticos1 > pontosturisticos2) {
            printf("Carta 1 Venceu!\n");
        } else if (pontosturisticos1 < pontosturisticos2) {
            printf("Carta 2 Venceu!\n");
        } else
        printf("Empate!\n");
        break;
    case 5:
        printf("Comparação da densidade demográfica\n");
        printf("%s: %.2f\n", cidade1, densidade1);
        printf("%s: %.2f\n", cidade2, densidade2);

        if (densidade1 < densidade2) {
            printf("Carta 1 Venceu!\n");
        } else if (densidade1 > densidade2) {
            printf("Carta 2 Venceu!\n");
        } else
        printf("Empate!\n");
        break;

    default:
    printf("Comando inválido\n");
        break;
    }

    return 0;
}