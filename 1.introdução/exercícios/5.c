#include <stdio.h>
#include <math.h>

int main(){
    float D, a, b, c;
    
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    
    D = sqrtf(pow(a, 2) + pow(b, 2) + pow(c, 2));
    
    printf("A diagonal do paralelepipedo e: %.2f\n", D);
    return 0;
}