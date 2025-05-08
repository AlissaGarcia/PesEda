#include <stdio.h>

int main() {
    int num, i, contador = 0;

    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            contador++;
        }
    }

    if (contador == 2) {
        printf("Numero primo\n");
    } else {
        printf("Nao e primo\n");
    }

    return 0;
}
