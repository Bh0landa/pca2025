#include <stdio.h>
int main(){
    int opcao;
    float a, b, media, diferenca, produto, divisao;
    
    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Codigo\tOperacoes\n");
    printf("1\tMedia\n");
    printf("2\tDiferenca\n");
    printf("3\tProduto\n");
    printf("4\tDivisao\n");
    
    printf("O que deseja fazer?\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            media = (a + b) / 2;
            printf("A media entre %.2f e %.2f eh: %.2f\n", a, b, media);
            break;
        case 2:
            diferenca = a - b;
            if(diferenca < 0){
                diferenca = -diferenca;
                printf("A diferenca entre %.2f e %.2f eh: %.2f\n", b, a, diferenca);
            }
            else{
            printf("A diferenca entre %.2f e %.2f eh: %.2f\n", a, b, diferenca);
            }
            break;
        case 3:
            produto = a * b;
            printf("O produto entre %.2f e %.2f eh: %.2f\n", a, b, produto);
            break;
        case 4:
            if(b != 0){
                divisao = a / b;
                printf("A divisao entre %.2f e %.2f eh: %.2f\n", a, b, divisao);
            } else {
                printf("Erro: Divisao por zero nao eh permitida.\n");
            }
            break;
        default:
            printf("Opcao invalida.\n");
    }
}
