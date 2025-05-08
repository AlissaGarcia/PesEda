#include <stdio.h>

int main(){

     float altura, pesoIdeal;
    char sexo;

    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);

    printf("Digite o sexo da pessoa: \nF- feminino\n M- masculino\n");
    scanf("%c", &sexo);

    if(sexo == 'M' || sexo == 'm'){
        pesoIdeal = (72.7*altura)-58;
        printf("O peso ideal é: %.2f", pesoIdeal);
    }else if(sexo == 'F'|| sexo == 'f'){
        pesoIdeal = (62.1*altura)-44.7;
        printf("O peso ideal é: %.2f", pesoIdeal);
    }else{
        printf("Sexo  inválido, Digite M ou F");
        return 0;
    }

    printf("O peso ideal para a pessoa do sexo %c, com altura %f é: %f", sexo, altura, pesoIdeal);
    return 0;

}
