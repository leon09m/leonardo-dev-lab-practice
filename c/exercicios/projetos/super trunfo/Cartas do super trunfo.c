#include <stdio.h>

int main() {

    /* ===========================
       Declarando variáveis
       =========================== */

    /* Carta 1 */   
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    /* Carta 2 */
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    /* ===========================
       Entrada de dados - CARTA 1
       =========================== */
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: (A a H) ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    /* ===========================
       Entrada de dados - CARTA 2
       =========================== */

    printf("\n=== Cadastro da Carta 2 ===\n");
    
    printf("Estado: (A a H) ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    /* ===========================
       EXIBICAO DOS DADOS
       =========================== */
       
    printf("\n\n===== CARTAS CADASTRADAS =====\n");
    
    /* Exibicao Carta 1 */
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);            
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    
    /* Exibicao Carta 2 */
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);            
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}