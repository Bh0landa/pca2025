#include <stdio.h>
#define T 100

int main(){
    int v[T], soma = 0;
    float media;

    for(int i = 0; i <T; i++){
        printf("Digite um valor (inteiro) para v[%d]: ", i);
        scanf("%d", &v[i]);
        if(v[i] != (int) v[i]){
            printf("Valor invalido, digite um numero inteiro.\n");
            break;
        }
        soma += v[i];
    }
    media = soma / T;
    printf("A media dos valores do vetor v eh: %.2f\n", media);

    for(int i = 0; i < T; i++){
        if(v[i] > media){
            printf("v[%d] = %d e maior que a media.\n", i, v[i]);
        }
    }
    return 0;
}