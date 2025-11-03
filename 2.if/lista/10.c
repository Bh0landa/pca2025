#include <stdio.h>

int main(){
    float pfinal, cfabrica;

    printf("Digite o valor do custo de fabrica: ");
    scanf("%f", &cfabrica);
    
    if(cfabrica < 12000){
        pfinal = cfabrica + (cfabrica * 0.05);
        printf("O preco final ao consumidor eh: %.2f\n", pfinal);
    }
    else if(cfabrica >= 12000 && cfabrica <= 25000){
        pfinal = cfabrica + (cfabrica * 0.10) + (cfabrica * 0.15);
        printf("O preco final ao consumidor eh: %.2f\n", pfinal);
    }
    else{
        pfinal = cfabrica + (cfabrica * 0.15) + (cfabrica * 0.20);
        printf("O preco final ao consumidor eh: %.2f\n", pfinal);
    }
    return 0;
}
