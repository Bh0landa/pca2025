#include <stdio.h>
#include <ctype.h>

int main(){
    int idade[6], contador = 0, soma_idade = 0, qtd_azul = 0, qtd_ruiva = 0, qtd_altura = 0;
    float peso[6], altura[6], media, porcentagem_azul, porcentagem_ruiva;
    char olhos[6], cabelo[6];

    for(int i = 0; i < 6; i++){
        printf("Pessoa %d:\n", i + 1);
        
        printf("Idade: ");
        scanf("%d", &idade[i]);
        
        printf("Peso: ");
        scanf("%f", &peso[i]);
        
        printf("Altura: ");
        scanf("%f", &altura[i]);
        
        printf("Cor dos olhos (A-azul, P-preto, V-verde): ");
        scanf(" %c", &olhos[i]);
        
        printf("Cor dos cabelos (P-preto, C-castanho, L-loiro, R-ruivo): ");
        scanf(" %c", &cabelo[i]);
        
        printf("\n");
    }
    for(int i = 0; i < 6; i++){
        if(idade[i] > 50 && peso[i] < 60){
            contador++;
        }
    }
    for(int i = 0; i < 6; i++){
        if(altura[i] < 1.50){
            soma_idade += idade[i];
            qtd_altura++;
        }
    }
    for(int i = 0; i < 6; i++){
        if(toupper(olhos[i]) == 'A'){
            qtd_azul++;
        }
    }
    float porcentagem = (qtd_azul / (float)6) * 100;

    for(int i = 0; i < 6; i++){
        if((toupper(cabelo[i]) == 'R') && (toupper(olhos[i]) != 'A')){
            qtd_ruiva++;
        }
    }

    media = soma_idade / qtd_altura;
    porcentagem_azul = (qtd_azul / 6) * 100;
    porcentagem_ruiva = (qtd_ruiva / 6) * 100;
    
    printf("Quantidade de pessoas com idade > 50 e peso < 60: %d\n", contador);
    printf("Media da idade das pessoas com altura < 1.50: %.2f\n", media);
    printf("Porcentagem de pessoas com olhos azuis: %.2f%%\n", porcentagem_azul);
    printf("Porcentagem de pessoas com cabelos ruivos (e olhos nao azuis): %.2f%%\n", porcentagem_ruiva);
    return 0;
}