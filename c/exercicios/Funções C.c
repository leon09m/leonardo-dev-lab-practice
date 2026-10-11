#include <stdio.h>
#include <math.h>

int soma(int a, int b) {
    return a + b;
}   

int main() {
    int resultado = soma(5, 10);

    printf("O resultado da soma é: %d\n", resultado);

    return 0;
}