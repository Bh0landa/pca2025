#include <stdio.h>

int main(){
    int idade;
    
    printf("Informe sua idade: ");
    scanf("%d",&idade);
    
    if(idade < 20){
        if (idade < 13){
            printf("Infantil.");
        }
        else{
            printf("Adolescente");
        }
    }
    else if(idade < 50){
        printf("Adulto");
    }
    else{
        printf("Idoso");
    }
    return 0;
}