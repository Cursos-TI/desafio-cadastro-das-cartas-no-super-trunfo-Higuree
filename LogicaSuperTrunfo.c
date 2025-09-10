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
    int resultado1;

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
    int resultado2;

    int escolha1, escolha2;  // Variáveis do menu interativo
    
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

    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:
        printf("Você escolheu a opção População\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu a opção Área\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu a opção PIB\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu a opção Pontos Turísticos\n");
        resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu a opção Densidade demográfica\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;

    default:
    printf("Comando inválido\n");
        break;
    }

    printf("Escolha o segundo atributo para comparar\n");
    printf("Você deve escolher um atributo diferente do primeiro\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2) {
        printf("Você escolheu o mesmo atributo!\n");
     } else {
         switch (escolha2)
    {
    case 1:
        printf("Você escolheu a opção População\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu a opção Área\n");
        resultado2 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu a opção PIB\n");
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu a opção Pontos Turísticos\n");
        resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu a opção Densidade demográfica\n");
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        break;

    default:
    printf("Comando inválido\n");
        break;
    }

    if (resultado1 && resultado2) {
        printf("A carta 1 venceu!\n");
    } else if(resultado1 != resultado2){
        printf("Empatou!\n");
    } else {
        printf("A carta 2 venceu!\n");
    }
     }

    return 0;
}