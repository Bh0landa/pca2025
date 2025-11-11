#include <stdio.h>

int main(){
    int M[8][6], i, j;
    float soma[4];

    for(i = 0; i < 8; i++){
        for(j = 0; j < 6; j++){
            printf("Digite o valor para M [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        soma[i] = 0;
        for(j = 0; j < 6; j++){
            if(i % 2 ==0)
                soma[i] += M[i][j];
        }
        
        printf("media da linha %d: %.2f\n", (i+1)*2, soma[i*2]/8);
    }
    return 0;
}