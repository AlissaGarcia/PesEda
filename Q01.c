#include <stdio.h>

 int main(){
     float preco, litros, pag;

     printf("Digite o preço do litro da gasolina: ");
     scanf("%f", &preco);

     printf("Digite quantos litros de gasolina foram colocados: ");
     scanf("%f", &litros);
   
    pag = preco * litros;

    printf("O preço do litro da gasolina e: %.2f. O valor do pagamento e: %.2f", preco, pag);

     return 0;
 }

