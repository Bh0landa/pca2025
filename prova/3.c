#include <stdio.h>

int main() {
    int sexo, idade, total = 0, maior = -1, menor = 999, mulheres_200 = 0;
    float salario, soma = 0.0;

    do{
        printf("Digite seu sexo (1-Masculino / 2-Feminino): ");
        scanf("%d", &sexo);
        printf("Digite seu salario: ");
        scanf("%f", &salario);
        printf("Digite sua idade (-1 para sair): ");
        scanf("%d", &idade);
        
        if(idade != -1){
            total++;
            soma += salario;
            if(idade > maior){
                maior = idade;
            }
            if(idade < menor){
                menor = idade;
            }
            if(sexo == 2 && salario <= 200.0){
                mulheres_200++;
            }
        }
    } while (idade != -1);

    if(total > 0){
        printf("\nMedia de salario: %.2f\n", soma / total);
        printf("Maior idade: %d\n", maior);
        printf("Menor idade: %d\n", menor);
    }
    printf("Mulheres com salario ate 200: %d\n", mulheres_200);
    return 0;
}