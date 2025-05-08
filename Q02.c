#include <stdio.h>


int main(){

int a,b, aux;

printf("Digite o valor de A: ");
scanf("%d", &a);

printf("Digite o valor de B: ");
scanf("%d", &b);

printf("O valor de A antes é: %d \nO valor de B antes é: %d", a, b);

aux = a;
a = b;
b = aux;

printf("\nO valor de A agora é: %d \nO valor de B agora é: %d \n ", a, b);

    return 0;
}