#include <stdio.h>

int main(){
    int x;

    printf("Digite um numero entre 1 e 12: ");
    scanf("%d", &x);

    if(x == 1){
        printf("1: Janeiro\n");
    }
    else if(x == 2){
        printf("2: Fevereiro\n");
    }
    else if(x == 3){
        printf("3: Março\n");
    }
    else if(x == 4){
        printf("4: Abril\n");
    }
    else if(x == 5){
        printf("5: Maio\n");
    }
    else if(x == 6){
        printf("6: Junho\n");
    }
    else if(x == 7){
        printf("7: Julho\n");
    }
    else if(x == 8){
        printf("8: Agosto\n");
    }
    else if(x == 9){
        printf("9: Setembro\n");
    }
    else if(x == 10){
        printf("10: Outubro\n");
    }
    else if(x == 11){
        printf("11: Novembro\n");
    }
    else if(x == 12){
        printf("12: Dezembro\n");
    }
    else{
        printf("Numero invalido! Digite um valor de 1 x 12.\n");
    }
    return 0;
}