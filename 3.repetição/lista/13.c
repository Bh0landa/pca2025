#include <stdio.h>

int main() {
    int idade, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
    float peso, soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, media1, media2, media3, media4;

    for(int i=0; i<15; i++){
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);
        
        printf("Digite o peso da pessoa %d: ", i + 1);
        scanf("%f", &peso);

        if(idade >= 1 && idade <= 10){
            soma1 += peso;
            cont1++;
        }
        else if(idade >= 11 && idade <= 20){
            soma2 += peso;
            cont2++;
        }
        else if(idade >= 21 && idade <= 30){
            soma3 += peso;
            cont3++;
        }
        else if(idade >= 31){
            soma4 += peso;
            cont4++;
        }
    }

    media1 = soma1 / cont1;
    media2 = soma2 / cont2;
    media3 = soma3 / cont3;
    media4 = soma4 / cont4;

    printf("\nMédias dos pesos por faixa etária:\n");
    printf("1 a 10 anos: %.2f\n", media1);
    printf("11 a 20 anos: %.2f\n", media2);
    printf("21 a 30 anos: %.2f\n", media3);
    printf("31 anos ou mais: %.2f\n", media4);
    return (0);
}