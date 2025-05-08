#include <stdio.h>

// int main(){
//     float preco, litros, pag;

//     printf("Digite o preço do litro da gasolina: ");
//     scanf("%f", &preco);

//     printf("Digite quantos litros de gasolina foram colocados: ");
//     scanf("%f", &litros);
   
//    pag = preco * litros;

//    printf("O preço do litro da gasolina e: %.2f. O valor do pagamento e: %.2f", preco, pag);





//     return 0;
// }


// int main(){

// int a,b, aux;

// printf("Digite o valor de A: ");
// scanf("%d", &a);

// printf("Digite o valor de B: ");
// scanf("%d", &b);

// printf("O valor de A antes é: %d \nO valor de B antes é: %d", a, b);

// aux = a;
// a = b;
// b = aux;

// printf("\nO valor de A agora é: %d \nO valor de B agora é: %d \n ", a, b);

//     return 0;
// }

int main(){

int a, b;

printf("Digite o valor de A: ");
scanf("%d", &a);

printf("Digite o valor de B: ");
scanf("%d", &b);

if (a>b)
{
 
 printf("%d, %d", b,a);

}else
{
   printf("%d, %d \n", a,b);
}



    return 0;
}