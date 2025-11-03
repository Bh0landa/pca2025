#include <stdio.h>

int main(){
    int idade[5], qtd_idade = 0, qtd_altura = 0, qtd_peso = 0;
    float altura[5], peso[5], media, soma_altura = 0, porcentagem3;
    
    for(int i = 0; i < 5; i++){
        printf("Digite a idade do individuo %d: ", i + 1);
        scanf("%d", &idade[i]);
        
        printf("Digite a altura do individuo %d: ", i + 1);
        scanf("%f", &altura[i]);
        
        printf("Digite o peso do individuo %d: ", i + 1);
        scanf("%f", &peso[i]);
    }
    for(int i = 0; i < 5; i++){
        if(idade[i] > 50){
            qtd_idade++;
        }
        else if(idade[i] >=10 && idade[i] <= 20){
            soma_altura += altura[i];
            qtd_altura++;
        }
        else{
            qtd_peso++;
        }
    }
    
    media = soma_altura / qtd_altura;
    porcentagem3 = (qtd_peso / 5) * 100;

    printf("Total de individuos com idade > 50: %d\n", qtd_idade);
    printf("Media de altura entre individos de 10 a 20 anos: %.2f\n", media);
    printf("Porcentagem de individuos com peso > 40: %.2f%%\n", porcentagem3);
    return 0;
}