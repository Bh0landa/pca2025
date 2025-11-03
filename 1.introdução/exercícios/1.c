#include <stdio.h>

int main(){
    int carga_horaria;
    float valor_hora, salario;
    
    printf("Digite a carga horaria mensal: ");
    scanf("%d", &carga_horaria);
    
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);
    
    salario = carga_horaria * valor_hora * 5.25;
    
    printf("O salario mensal e: %.2f\n", salario);
    return 0;
}