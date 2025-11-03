#include <stdio.h>

int main(){
    float A, b, h;
    
    printf("Digite o tamanho da base do losango: ");
    scanf("%f", &b);
    
    printf("Digite o tamanho da altura do losango: ");
    scanf("%f", &h);
    
    A = (b * h) / 2;
    
    printf("A area do losango e: %.2f\n", A);
    return 0;
}