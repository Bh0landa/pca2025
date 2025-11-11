#include <stdio.h>

int exp(int x, int y){
    if(y == 0){
        return 1;
    }
    else{
        return x * exp(x, y - 1);
    }
}

int main(){
    int x, y;
    printf("Digite a x: ");
    scanf("%d", &x);
    printf("Digite o y: ");
    scanf("%d", &y);
    if (y < 0){
        printf("Expoente deve ser um numero inteiro nao negativo.\n");
        return 1;
    }

    int resultado = exp(x, y);
    printf("%d elevado a %d eh: %d\n", x, y, resultado);
    return 0;
}