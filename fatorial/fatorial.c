#include <stdio.h>

int calcula_fatorial(int f) {
    int resultado = 1;

    for(int i = 2; i <= f; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("O fatorial de %d e %d.\n", numero, calcula_fatorial(numero));

    return 0;
}
