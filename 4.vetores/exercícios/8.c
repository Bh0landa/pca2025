#include <stdio.h>
#define T 4

int main(){
    int vet[T];

    for(int i = 0; i < T; i ++){
        printf("Informe o valor do elemento vet[%d]:\n", i);
        scanf("%d", &vet[i]);
    }

    for(int i =0; i < T; i++){
        printf("vet[%d] = %d\n", i, vet[i]);
    }
    return 0;
}