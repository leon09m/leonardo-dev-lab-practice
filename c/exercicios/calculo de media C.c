#include <stdio.h>

/* Funcao para calcular media  */
float media(float a, float b) {
    return (a + b) / 2;
}   

/* Funcao principal */
int main() {

    float nota1, nota2, media;

    /* Entrada de dados */
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    /* Processamento */
    media = media(nota1, nota2);
    
    /* Saida */
    printf("Media: %.2f\n", media);

    return 0;
}