#include <stdio.h>
#define T 100

int main(){
    int lista[T], qtd = 0, b, soma = 0;
    float media;

    while(qtd < T) {
        printf("Digite um valor positivo e inteiro (-1 para parar): ");
        scanf("%d", &b);
        if (b == -1) break;
        else if (b > 0 && (int)b == b) {
            lista[qtd] = b;
            qtd++;
        }
    }

    printf("Maior valor %d\n", lista[0]);
    
    for (int i = 1; i < qtd; i++) {
        if (lista[i] > lista[0]) {
            lista[0] = lista[i];
        }
    }
    for(int i = 0; i < qtd; i++) {
        soma += lista[i];
    }
    
    media = soma / qtd;
    
    printf("Media dos valores inseridos: %.2f\n", media);
    return 0;
}