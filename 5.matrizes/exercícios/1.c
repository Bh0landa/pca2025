#include <stdio.h>

int main(){
    int mat[6][6], i, j, contador = 0;

    for (i = 0; i < 6; ++i){
        for (j = 0; j < 6; ++j){
            printf("Digite o valor para A [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    if(mat[i][j] > 10){
        contador++;
    }

    printf("Quantidade de valores maiores que 10: %d\n", contador);
    return 0;
}