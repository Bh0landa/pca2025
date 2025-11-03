#include <stdio.h>

int main(){
    int A [3] [3], i, j, soma = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            A[i] [j] = 4 + 3 * i - j;
        }
        
    }
    if(j == 2){
        soma += A[i] [j];
    }
    
    printf("Soma dos elementos da terceira coluna: %d\n", soma);
    return 0;
}