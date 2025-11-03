#include <stdio.h>

int main(){
    int A[4][4], B[4][4], C[4][4], i, j;

    for (i = 0; i < 4; ++i){
        for (j = 0; j < 4; ++j){
            printf("Digite o valor para A [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
            printf("Digite o valor para B [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Matriz resultante C:\n");
    for (i = 0; i < 4; ++i){
        for (j = 0; j < 4; ++j){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}