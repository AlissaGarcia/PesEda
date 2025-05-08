#include <stdio.h>

int main() {
    float preco, total;
    int opcao;

    scanf("%f", &preco);
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            total = preco * 0.85;
            break;
        case 2:
            total = preco * 0.90;
            break;
        case 3:
            total = preco;
            break;
        case 4:
            total = preco * 1.10;
            break;
        default:
            total = 0;
            break;
    }

    printf("Total a pagar: %.2f\n", total);

    return 0;
}
