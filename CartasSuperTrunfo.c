#include <stdio.h>

int main() {

    // Declaração das variáveis

    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float pibpercapita1;

    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapita2;
    
    // Leitura dos dados da carta 1

    printf("Cadastro da carta1\n");

    printf("Digite o Estado de A-H:");
    scanf(" %c", &estado1);

    printf("Digite o Código da carta:");
    scanf("%s", codigo1);

    printf("digite o nome da cidade:");
    scanf("%s", cidade1);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao1);

    printf("Digite a Área da cidade em km²:");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade:");
    scanf("%d", &pontosturisticos1);

    // Cálculos da carta 1

    densidade1 = (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;

    // Leitura dos dados da carta 2

    printf("Cadastro da carta2\n");

    printf("Digite o Estado de A-H:");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta:");
    scanf("%s", codigo2);

    printf("digite o nome da cidade:");
    scanf("%s", cidade2);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao2);

    printf("Digite a Área da cidade em km²:");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:");
    scanf("%d", &pontosturisticos2);

    // Cálculos da carta 2
    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;

    // Exibição das cartas cadastradas

    printf("carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB Per Capita: %.2f reais\n", pibpercapita1);

     printf("carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB Per Capita: %.2f reais\n", pibpercapita2);
    
    return 0;
}