#include<stdio.h>
int main(){
    char nota;

    printf("Digite as notas em letra (A,B,C,D,E):");
    scanf("%c",&nota);

    switch(nota){
        case 'A':
        case 'a':
           printf("Nota excelente");
            break;
        case 'B':
        case 'b':
           printf("Nota otima");
            break;
        case 'C':
        case 'c':
           printf("Nota boa");
            break;
        case 'D':
        case 'd':
           printf("Nota Ruim");
            break;
        case 'E':
        case 'e':
           printf("Nota pessima");
            break;
        default:
            printf("Nota errada");
            break;
    }
    return(0);
}