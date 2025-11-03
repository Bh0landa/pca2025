#include <stdio.h>

int main() {
    int idade, soma_idade = 0, qtd_altura = 0, qtd_peso_altura = 0, qtd_idade_altura = 0;
    float peso, altura, media, porcentagem;

    for(int i = 0; i < 10; i++){
        printf("Pessoa %d - Digite a idade: ", i);
        scanf("%d", &idade);
        
        printf("Digite o peso (kg): ");
        scanf("%f", &peso);
        
        printf("Digite a altura (m): ");
        scanf("%f", &altura);

        soma_idade += idade;

        if(peso > 90 && altura < 1.5){
            qtd_peso_altura++;
        }
        else if(altura > 1.9){
            qtd_altura++;
            if(idade >= 10 && idade <= 30){
                qtd_idade_altura++;
            }
        }
    }

    media = soma_idade / 10;
    porcentagem = (qtd_idade_altura / qtd_altura) * 100;

    printf("\nMedia das idades: %.2f\n", media);
    printf("Quantidade de pessoas com peso > 90kg e altura < 1,50m: %d\n", qtd_peso_altura);
    printf("Porcentagem de pessoas com idade entre 10 e 30 anos entre as que medem mais de 1,90m: %.2f%%\n", porcentagem);
    return 0;
}
