#include <stdio.h>

int main(){
    char strings [5][100];
    
    for(int count=0;count<5;count++){
        printf("\nDigite uma string: ");
        gets(strings[count]);
    }

    printf("As strings que voce digitou foram:");

    for(int count=0;count<5;count++){
        printf("%s\n",strings[count]);
    }
    return(0);
}