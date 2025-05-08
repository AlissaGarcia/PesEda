#include <stdio.h>

int main() {
    int anoNascimento, idade;
    int anoAtual = 2025;

    scanf("%d", &anoNascimento);
    idade = anoAtual - anoNascimento;

    printf("Idade: %d\n", idade);

    if (idade >= 16) {
        printf("Pode votar\n");
    } else {
        printf("Nao pode votar\n");
    }

    if (idade >= 18) {
        printf("Pode tirar habilitacao\n");
    } else {
        printf("Nao pode tirar habilitacao\n");
    }

    return 0;
}
