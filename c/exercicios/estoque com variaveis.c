#include <stdio.h>

int main() {
    
    /* ===========================
       DECLARACAO DE VARIAVEIS 
       ========================== */

/* Produto 1*/
unsigned int quantidade1 = 150;
float preco1 = 29.90;

/* Produto 2*/
unsigned int quantidade2 = 200;
float preco2 = 19.50;

/* Valores totais*/
float valortotal1;
float valortotal2;

/* Grandes numeros*/
unsigned long int estoqueGeral = 4000000000;

/* ===========================
   Processamento
   ========================== */

/* Calcula o valor total dos produtos */
valortotal1 = quantidade1 * preco1;
valortotal2 = quantidade2 * preco2;

/* ==========================
   Exibição dos dados 
   ========================== */

printf("=== Sistema de inventario ===\n\n");

/* Produto 1 */
printf("produto1\n");
printf("quantidade: %u\n", quantidade1);
printf("preco: %.2f\n", preco1);
printf("valor total: %.2f\n\n", valortotal1);

/* Produto 2 */
printf("produto2\n");
printf("quantidade: %u\n", quantidade2);
printf("preco: %.2f\n", preco2);
printf("valor total: %.2f\n\n", valortotal2);

/* =========================
   Operadores relacionais
   ========================= */

printf("comparacoes:\n\n");

/* Comparacao de quantidade */
printf("produto 1 tem mais quantidade que produto 2: %d\n", quantidade1 > quantidade2);

/* Comparacao de valor total */
printf("produto 1 possui maior valor total: %d\n", valortotal1 > valortotal2);

/* Comparacao de igualdade */
printf("os estoques sao iguais: %d\n", quantidade1 == quantidade2);

/* Comparacao de diferenca */
printf("Os precos sao diferentes: %d\n", preco1 != preco2); 

/* Grande valor */
printf("\nEstoque geral da empresa: %lu\n", estoqueGeral);

return 0;
}