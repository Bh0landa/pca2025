#include <stdio.h>
#define T 30

int main(){
    int soma1 = 0, qtd_acima = 0, qtd_aprovados = 0;
    float notas[T], media, porcentagem;
    
    for(int i = 0; i < T; i++){
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma1 += notas[i];
        if(notas[i] >= 6){
            qtd_aprovados++;
        }
    }
    
    media = soma1 / T;
    porcentagem = (qtd_aprovados / T) * 100;
    
    for(int i = 0; i < T; i++){
        if(notas[i] > media){
            qtd_acima++;
        }
    }
    
    printf("Media da turma: %.2f\n", media);
    printf("Quantidade de alunos acima da media: %d\n", qtd_acima);
    printf("Porcentagem de aprovados: %.2f%%\n", porcentagem);
    return 0;
}