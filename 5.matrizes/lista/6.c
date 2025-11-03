#include <stdio.h>

int main(){
    int A [20] [10], V[20], i, j;

    for(i = 0; i < 20; i++){
        for(j = 0; j < 10; j++){
            printf("Digite o valor para A [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0; i < 20; i++){
        V[i] = 0;
        for(j = 0; j < 10; j++){
            V[i] += A[i][j];
        }
    }
}