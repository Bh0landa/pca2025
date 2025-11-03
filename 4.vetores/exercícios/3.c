#include <stdio.h>
#define T 10

int main(){
    char v[T], aux, troca;

    for(int i = 0; i < T; i++){
        printf("Digite um valor: ");
        scanf(" %c", &v[i]);
    }

    do{
        troca = 0;
        for(int i = 0; i < T-1; i++){
            if(v[i] < v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                troca = 1;
            }
        }
    } while(troca == 1);

    for(int i = 0; i < T; i++){
        printf("%c \n", v[i]);
        printf("%d \n", v[i]);
    }
    return 0;
}