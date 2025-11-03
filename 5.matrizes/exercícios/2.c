#include <stdio.h>

int main(){
    int A [3] [3], i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            A[i] [j] = i - j;
            printf("A[%d][%d] = %d\n", i + 1, j + 1, A[i][j]);
        }
    }
    return 0;
}