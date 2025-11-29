// Passagem de parâmetros por referência em C
#include <stdio.h>

void AumentaPorReferencia(int *numero){ // numero é um ponteiro para int
    *numero = *numero + 10; // Modifica o valor apontado pelo ponteiro
    printf("Dentro da funcao (por referencia): numero = %d\n", *numero);
}

int main(){
    int numero = 5;
    AumentaPorReferencia(&numero); // Passa o endereço de numero
    printf("Fora da funcao (por referencia): numero = %d\n", numero);
    return 0;
}