#include <stdio.h>

int main() {
    float preco, total;
    int opcao;

    scanf("%f", &preco);
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            total = preco * 0.9;
            break;
        case 2:
            total = preco;
            break;
        default:
            total = 0;
            break;
    }

    printf("Total a pagar: %.2f\n", total);

    return 0;
}
