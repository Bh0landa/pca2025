#include <stdio.h>
int main(){
    float nota1, nota2, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;

    if(media < 3){
        printf("media: %.2f Reprovado", media);
    }
    else if(media >= 3 && media < 7){
        printf("media: %.2f Exame", media);
    }
    else{
        printf("media: %.2f Aprovado", media);
    }
    return 0;
}