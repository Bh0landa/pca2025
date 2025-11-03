#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    
    printf("digite uma letra minuscula : ");
    
    ch=getchar();
    
    putchar(toupper(ch));
    
    putchar('\n');
    return (0);
}