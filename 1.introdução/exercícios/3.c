#include <stdio.h>
#include <math.h>

int main(){
    float P, A, D, b, h;
    
    printf("Digite o tamanho da base do retangulo: ");
    scanf("%f", &b);
    
    printf("Digite o tamanho da altura do retangulo: ");
    scanf("%f", &h);
    
    A = b * h;
    P = 2 * (b + h);
    D = sqrtf(pow(b, 2) + pow(h, 2));
    
    printf("A area do retangulo e: %.2f\n", A);  
    printf("O perimetro do retangulo e: %.2f\n", P);
    printf("A diagonal do retangulo e: %.2f\n", D);
    return 0;
}