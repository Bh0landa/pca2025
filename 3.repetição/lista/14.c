#include <stdio.h>

int main() {
    int idade, opiniao[15], soma_idade = 0, qtd_3 = 0, qtd_2 = 0, qtd_1 = 0;
    float media, porcentagem;

    for(int i = 0; i < 15; i++){
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &idade);

        printf("Opiniao: 1-regular, 2-bom, 3-otimo\n");

        printf("Digite a opiniao da pessoa %d: ", i+1);
        scanf("%d", &opiniao[i]);

        soma_idade += idade;

    }
    for(int i = 0; i < 15; i++){
        if(opiniao[i] == 3){
            qtd_3++;
        }
        else if(opiniao[i] == 2){
            qtd_2++;
        }
        else{
            qtd_1++;
        }
    }

    media = soma_idade / qtd_3;
    porcentagem = (qtd_2 / 15) * 100;

    printf("Media de idade das pessoas que responderam otimo: %.2f\n", media);
    printf("Quantidade de pessoas que responderam regular: %d\n", qtd_1);
    printf("Porcentagem de pessoas que responderam bom: %.2f%%\n", porcentagem);
    return (0);
}