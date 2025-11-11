#include <stdio.h>

int exp(int base, int expoente){
    if(expoente == 0){
        return 1;
    }
    else{
        return base * exp(base, expoente - 1);
    }
}

int main(){
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    int resultado = exp(base, expoente);
    printf("%d elevado a %d eh: %d\n", base, expoente, resultado);
    return 0;
}