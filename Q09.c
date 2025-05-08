#include <stdio.h>

int main() {
    int num, maior, menor, i;

    scanf("%d", &num);
    maior = num;
    menor = num;

    for (i = 1; i < 20; i++) {
        scanf("%d", &num);
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
