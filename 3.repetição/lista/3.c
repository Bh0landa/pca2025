#include <stdio.h>

int main(){
    int idade[8], cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, count5 = 0;
    float porcentagem1, porcentagem5;

    for( int i = 0; i < 8; i++){
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);
    }
    for(int i = 0; i < 8; i++){
        if(idade[i] <=15){
            cont1++;
        }
        else if(idade[i] > 15 && idade[i] <=30){
            cont2++;
        }
        else if(idade[i] > 30 && idade[i] <=45){
            cont3++;
        }
        else if(idade[i] > 45 && idade[i] <=60){
            cont4++;
        }
        else{
            count5++;
        }
    }

    porcentagem1 = (cont1 / 8) * 100;
    porcentagem5 = (count5 / 8) * 100;

    printf("A primeira faixa etaria tem %d pessoa(s) e representa %.2f%%\n", cont1, porcentagem1);
    printf("A segunda faixa etaria tem %d pessoa(s)\n", cont2);
    printf("A terceira faixa etaria tem %d pessoa(s)\n", cont3);
    printf("A quarta faixa etaria tem %d pessoa(s)\n", cont4);
    printf("A quinta faixa etaria tem %d pessoa(s) e representa %.2f%%\n", count5, porcentagem5);
    return (0);
}