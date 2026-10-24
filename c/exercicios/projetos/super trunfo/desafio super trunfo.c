#include <stdio.h>
#include <string.h>

int main() {

    /* ===========================
       Declarando variáveis
       =========================== */

    /* Carta 1 */   
    char estado1;
    char codigo1[4];
    char cidade1[50];
    
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    float densidade1;
    float pibPerCapita1;
    float superpoder1;

    /* Carta 2 */
    char estado2;
    char codigo2[4];
    char cidade2[50];

    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade2;
    float pibPerCapita2;
    float superpoder2;

    /* ===========================
       Entrada de dados - CARTA 1
       =========================== */

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /* ===========================
       Entrada de dados - CARTA 2
       =========================== */

    printf("\n=== Cadastro da Carta 2 ===\n");
    
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /* ===========================
       Calculos
       =========================== */

          /* Carta 1 */
          densidade1 = (float) populacao1 / area1;
          pibPerCapita1 = pib1 / populacao1;
          superpoder1 = 
            (float) populacao1 +
            area1 +
            pib1 +
            pontosTuristicos1 +
            (1.0 / densidade1);
          /* Carta 2 */
           densidade2 = (float)populacao2 / area2;
           pibPerCapita2 = pib2 / populacao2;
           superpoder2 = 
            (float) populacao2 +
            area2 +
            pib2 +
            pontosTuristicos2 +
            (1.0 / densidade2);


    /* ===========================
       EXIBICAO DAS CARTAS
       =========================== */
       
    printf("\n\n===== CARTAS CADASTRADAS =====\n");
    
    /* Exibicao Carta 1 */
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);            
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Superpoder: %.2f\n", superpoder1);

    /* Exibicao Carta 2 */
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);            
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Superpoder: %.2f\n", superpoder2);

    /* ========================
       COMPARACAO DAS CARTAS
       ======================== */
    printf("\n\n===== COMPARAÇÃO DAS CARTAS =====\n");
    
    printf("populacao %lu\n", populacao1 > populacao2);
    printf("area %f\n", area1 > area2);
    printf("pib %f\n", pib1 > pib2);
    printf("pontos turisticos %d\n", pontosTuristicos1 > pontosTuristicos2);

    /* Menor densidade vence */
    printf("densidade populacional %d\n", densidade1 < densidade2);
    printf("pib per capita %d\n", pibPerCapita1 > pibPerCapita2);
    printf("superpoder %d\n", superpoder1 > superpoder2);
   
    return 0;
}