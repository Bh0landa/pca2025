#include <stdio.h>
#include <math.h>

int main(){
    float imc, peso, altura;
    
    printf("Digite o peso em kg: ");
    scanf("%f", &peso);
    
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    
    imc = peso / pow(altura, 2);
    
    printf("O IMC e: %.2f\n", imc);
    return 0;
}