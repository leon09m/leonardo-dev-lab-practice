#include <stdio.h>

int main() {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("numero divisivel por 2");
    } else {
        printf("numero nao divisivel por 2");   
    }
    return 0;
}