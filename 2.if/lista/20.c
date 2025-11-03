#include <stdio.h>

int main(){
    int idade;
    
    printf("Informe sua idade: ");
    scanf("%d",&idade);
    
    if(idade < 5){
        printf("Bebe.");
    }
    else if(idade >= 5 && idade <= 7){
        printf("Infantil.");
    }
    else if(idade >= 8 && idade <= 10){
        printf("Juvenil.");
    }
    else if(idade >= 11 && idade <= 15){
        printf("Adolescente.");
    }
    else if(idade >= 16 && idade <= 30){
        printf("Jovem.");
    }
    else if(idade >= 31 && idade <= 60){
        printf("Adulto.");
    }
    else{
        printf("Idoso.");
    }
    return 0;
}