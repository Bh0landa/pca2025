#include<stdio.h>

int main(){

    int qtd = 0;
    float totalnotas = 0, nota, media;

    while(qtd < 10){
        printf("Informe a nota:");
        scanf("%f",&nota);
        
        totalnotas += nota;
        qtd++;
    }
    
    printf("Total de notas e: %.2f \n",totalnotas);
    
    media = totalnotas/10.0;
    
    printf("A media da turma e: %.2f \n",media);
    return 0;
}