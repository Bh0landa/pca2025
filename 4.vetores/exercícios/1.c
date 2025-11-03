#include <stdio.h>
#define T 50

int main(){
    int dias[T];
    float temp, temp_dia;
    
    for(int i = 0; i < T; i++){
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp);
        dias[i] = temp;
    }

    printf("Digite uma temperatura para buscar: ");
    scanf("%f", &temp_dia);

    for(int i = 0; i < T; i++){
        if(dias[i] == temp_dia){
            printf("Temperatura encontrada nos dias %d\n", i + 1);
        }
    }
    return 0;
}