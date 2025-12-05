#include <stdio.h>

int celsiuspf(int t) {
    return (t * 9 / 5) + 32;
}

int fahrenheitpc(int t) {
    return (t - 32) * 5 / 9;
}

void menu() {
    printf("Escolha uma opcao:\n");
    printf("1 - Converter Celsius para Fahrenheit\n");
    printf("2 - Converter Fahrenheit para Celsius\n");
    printf("0 - Sair\n");
}
void executar_opcao(int opcao) {
    int temperatura, resultado;

    switch(opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%d", &temperatura);
            resultado = celsiuspf(temperatura);
            printf("Temperatura em Fahrenheit: %d\n", resultado);
            break;
        case 2:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%d", &temperatura);
            resultado = fahrenheitpc(temperatura);
            printf("Temperatura em Celsius: %d\n", resultado);
            break;
        case 0:
            printf("Saindo do programa.\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
    }
}

int main() {
    menu();
    int opcao;
    scanf("%d", &opcao);
    executar_opcao(opcao);
    return 0;
}
