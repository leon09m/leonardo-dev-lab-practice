#include <stdio.h>

int main() {
    // ======================================
    // SUPER TRUNFO DE PAISES 
    // Cadastro e comparacao de duas cartas
    // ======================================
    
    // -------------- Carta 1 ----------------
    char estado1 = 'B'; // B = Brasil, A = Argentina, C = Chile
    char codigo1[4] = "BRA";
    char cidade1[50] = "Brasília";
    unsigned long int populacao1 = 21399347;
    float area1 = 851427.0;
    float pib1 = 2000.0;
    int pontosTuristicos1 = 10;
    float densidade1;
    float pibPerCapita1;
    float superpoder1;

    // -------------- Carta 2 ----------------
    char estado2 = 'A'; // A = Argentina, B = Brasil, C = Chile
    char codigo2[4] = "ARG";
    char cidade2[50] = "Buenos Aires";
    unsigned long int populacao2 = 4519561;
    float area2 = 278040.0;
    float pib2 = 1500.0;
    int pontosTuristicos2 = 8;
    float densidade2;
    float pibPerCapita2;
    float superpoder2;

    // -------------- Calculos da carta 1 ----------------
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    superpoder1 = (float) populacao1 / 1000000.0
    + area1
    + pib1
    + pontosTuristicos1
    + pibPerCapita1
    + (1.0 / densidade1);

    // -------------- Calculos da carta 2 ----------------
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    superpoder2 = (float) populacao2 / 1000000.0
    + area2
    + pib2
    + pontosTuristicos2
    + pibPerCapita2
    + (1.0 / densidade2);

    // -------------- Exibicao da carta 1 ----------------
    printf("======================================\n");
    printf("          Carta 1: %s\n", codigo1);
    printf("======================================\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km quadrados\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f habitantes por km quadrado\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Superpoder: %.2f\n", superpoder1);  

    // -------------- Exibicao da carta 2 ----------------
    printf("======================================\n");     
    printf("          Carta 2: %s\n", codigo2);
    printf("======================================\n");     
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", codigo2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f km quadrados\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f habitantes por km quadrado\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Superpoder: %.2f\n", superpoder2);  

    // -------------- Comparacao das cartas ----------------
    printf("======================================\n"); 
    printf("          Comparacao das Cartas\n");
    printf("======================================\n");

    printf("\nPopulacao:\n");
    printf("Carta 1: %d\n", populacao1 > populacao2);
    printf("Carta 2: %d\n", populacao2 > populacao1);

    printf("\nArea:\n");
    printf("Carta 1: %d\n", area1 > area2);
    printf("Carta 2: %d\n", area2 > area1);

    printf("\nPIB:\n");
    printf("Carta 1: %d\n", pib1 > pib2);
    printf("Carta 2: %d\n", pib2 > pib1);

    printf("\nPontos Turisticos:\n");
    printf("Carta 1: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Carta 2: %d\n", pontosTuristicos2 > pontosTuristicos1);

    printf("\nDensidade:\n");
    printf("Carta 1: %d\n", densidade1 > densidade2);
    printf("Carta 2: %d\n", densidade2 > densidade1);

    printf("\nPIB per Capita:\n");
    printf("Carta 1: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Carta 2: %d\n", pibPerCapita2 > pibPerCapita1); 

    printf("\nSuperpoder:\n");
    printf("Carta 1: %d\n", superpoder1 > superpoder2);
    printf("Carta 2: %d\n", superpoder2 > superpoder1);

    printf("======================================\n");
    printf("         resultado final\n");
    printf("======================================\n");

    if (superpoder1 > superpoder2) {
        printf("Carta 1 (%s) venceu!\n", codigo1);
    } else if (superpoder2 > superpoder1) {
        printf("Carta 2 (%s) venceu!\n", codigo2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
    