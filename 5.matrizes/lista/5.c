#include <stdio.h>

int main(){
    int i, j, k=0;
    float M[12][4], soma[12], somat = 0;

    for(i=0; i<12; i++){
        soma[i] = 0;
        for(j=0; j<4; j++){
            printf("Digite quanto foi faturado no mes[%d] semana[%d]R$ ", i+1, j+1);
            scanf("%f", &M[i][j]);
            soma[i] += M[i][j];
            somat += M[i][j];
        }
    }
    printf("\n");
    printf("Total vendido em janeiro: R$ %.2f\n", soma[0]);
    printf("Total vendido em fevereiro: R$ %.2f\n", soma[1]);
    printf("Total vendido em marco: R$ %.2f\n", soma[2]);
    printf("Total vendido em abril: R$ %.2f\n", soma[3]);
    printf("Total vendido em maio: R$ %.2f\n", soma[4]);
    printf("Total vendido em junho: R$ %.2f\n", soma[5]);
    printf("Total vendido em julho: R$ %.2f\n", soma[6]);
    printf("Total vendido em agosto: R$ %.2f\n", soma[7]);
    printf("Total vendido em setembro: R$ %.2f\n", soma[8]);
    printf("Total vendido em outubro: R$ %.2f\n", soma[9]);
    printf("Total vendido em novembro: R$ %.2f\n", soma[10]);
    printf("Total vendido em dezembro: R$ %.2f\n", soma[11]);

    for(i=0; i<12; i++){
        for(j=0; j<4; j++){
            k++;
            printf("Total vendido na semana %d: R$ %.2f\n", k, M[i][j]);
        }
    }
    
    printf("Total vendido no ano: R$ %.2f\n", somat);
    
    return 0;
}