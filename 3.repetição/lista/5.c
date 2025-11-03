#include <stdio.h>

int main(){
    int resultado = 0;

    for(int i = 1; i <= 10; i++){
        resultado = 5 * i;
        printf("5 x %d = %d\n", i, resultado);
    }
    return 0;
}