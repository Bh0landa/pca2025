#include <stdio.h>

int main(){
    int mat[10][10], i, j;

    for (i = 0; i < 10; ++i){
        for (j = 0; j < 10; ++j){
            printf("Digite o valor para A [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
            if(i == j){
                printf("Elementos da diagonal principal: %d\n", mat[i][j]);
            }
        }
    }
    return 0;
}