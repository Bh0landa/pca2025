#include <stdio.h>

int main(){
    float salario;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    if (salario <= 300){
        salario = salario + (salario * 0.35);
        printf("Valor do salario com aumento de 35%%: %.2f\n", salario);
    }
    else{
        salario = salario + (salario * 0.15);
        printf("Valor do salario com aumento de 15%%: %.2f\n", salario);
    }
    return 0;
}