#include <stdio.h>

int main(){
    int x, y, z, w, i, j;

    printf("Digite o numero de linhas de A: ");
    scanf("%d", &x);
    printf("Digite o numero de colunas de A: ");
    scanf("%d", &y);
    printf("Digite o numero de linhas de B: ");
    scanf("%d", &z);
    printf("Digite o numero de colunas de B: ");
    scanf("%d", &w);

    int A[x][y], B[z][w], C[x][w];

    for(i = 0; i < x; ++i){
        for(j = 0; j < y; ++j){
            printf("Digite o valor para A [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < z; ++i){
        for(j = 0; j < w; ++j){
            printf("Digite o valor para B [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }
    if(x = w){
        for(i = 0; i < x; ++i){
            for(j = 0; j < w; ++j){
                C[i][j] = 0;
                for(int k = 0; k < y; ++k){
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        printf("Matriz resultante C:\n");
        for(i = 0; i < x; ++i){
            for(j = 0; j < w; ++j){
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}