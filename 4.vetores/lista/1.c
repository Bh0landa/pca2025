#include <stdio.h>

int main(){
    int T;

    printf("Defina o tamanho do vetor: ");
    scanf("%d", &T);

    int lista[T];

    for(int i = 0; i < T; i++){
        printf("Digite o valor da posicao %d: ", i+1);
        scanf("%d", &lista[i]);
    }
    for(int i = T - 1; i >= 0; i--){
        printf("%d\n", lista[i]);
    }
    return 0;
}