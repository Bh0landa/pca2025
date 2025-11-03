#include <stdio.h>

int main(){
    int sexo, idade, total = 0, maior = 0, menor = 0, mulheres_200 = 0;
    float salario, soma = 0, media;

    while(1){
        printf("Digite sua idade (-1 para sair): ");
        scanf("%d", &idade);
        if(idade < 0){
            break;
        }
        
        printf("Digite seu sexo (1-Masculino / 2-Feminino): ");
        scanf("%d", &sexo);
        
        printf("Digite seu salario: ");
        scanf("%f", &salario);
        
        total++;
        soma += salario;
        
        if(sexo == 2 && salario <= 200.0){
            mulheres_200++;
        }
        else if(idade > maior || maior == 0){
            maior = idade;
        }
        else if(idade < menor || menor == 0){
            menor = idade;
        }
    }

    media = soma / total;

    printf("\nMedia de salario: %.2f\n", media);
    printf("Maior idade: %d\n", maior);
    printf("Menor idade: %d\n", menor);
    printf("Mulheres com salario ate 200: %d\n", mulheres_200);
    return 0;
}