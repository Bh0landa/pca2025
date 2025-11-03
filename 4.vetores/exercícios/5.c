#include <stdio.h>

int main(){
    int v[6], dez = 0;

    for(int i=0; i<5; i++){
        printf("Digite um valor: ");
        scanf("%d", &v[i]);

        if(v[i] == 10){
            dez = 1;
        }
    }

    if(dez == 0){
        v[5] = 10;
    }
    
    else{
        printf("Digite o ultimo valor: ");
        scanf("%d", &v[5]);
    }

    for(int i=0; i<6; i++){
        if(v[i] == 10){
            printf("Valor %d encontrado no indice %d\n", 10, i);
            return 0;
        }
    }
    return 0;
}