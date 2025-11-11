#include <stdio.h>
#define T 50

int main(){
    int A[T], B[T], C[T], soma = 0;

    for(int i = 0; i < T; i++){
        printf("Digite um valor (inteiro) para A[%d]: ", i);
        scanf("%d", &A[i]);
        if(A[i] != (int) A[i]){
            printf("Valor invalido, digite um numero inteiro.\n");
            break;
        }
    }
    for(int i = 0; i < T; i++){
        printf("Digite um valor (inteiro) para B[%d]: ", i);
        scanf("%d", &B[i]);
        if(B[i] != (int) B[i]){
            printf("Valor invalido, digite um numero inteiro.\n");
            break;
        }
    }
    for(int i = 0, z = 49; i < T; i++, z--){
        C[i] = A[i] - B[z];
        soma += C[i];
    }
    printf("A soma dos valores de A[0]-B[49] + A[1]-B[48] + ... + A[49]-B[0] = %d\n", soma);
    return 0;
}