#include <stdio.h>

int main(){
    float opcao, deposito;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Tipo\t Descricao\n");
    printf(" 1 \t Poupanca\n");
    printf(" 2 \t Renda Fixa\n");
    printf("Qual o tipo de investimento?\n");
    scanf("%f", &opcao);

    if(opcao == 1){
        deposito = deposito + (deposito * 0.03);
        printf("Valor do deposito apos um mes: %.2f\n", deposito);
    }
    else if(opcao == 2){
        deposito = deposito + (deposito * 0.04);
        printf("Valor do deposito apos um mes: %.2f\n", deposito);
    }
    else{
        printf("Tipo de investimento invalido.\n");
    }
    return 0;
}