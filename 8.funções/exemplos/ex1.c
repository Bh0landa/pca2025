// Passagem de parametros por valor em C
#include <stdio.h>

void AumentaPorValor(int numero){ // numero é uma copia do valor
    numero = numero + 10; // Modifica apenas a copia local
    printf("Dentro da funcao (por valor): numero = %d\n", numero);
}

int main(){
    int numero = 5;
    AumentaPorValor(numero); // Passa uma copia do valor de numero
    printf("Fora da funcao (por valor): numero = %d\n", numero);
    return 0;
}