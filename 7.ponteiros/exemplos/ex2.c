#include <stdio.h>

int main(){
    int x,*px,*py;
    
    x = 9;
    px = &x;
    py = px;

    printf("x= %d\n",x); // imprime o valor de x
    printf("&x= %x\n",&x); // endereço da variável x, que é igual ao conteúdo de px
    printf("px= %d\n",px); // valor de px, que é o endereço de x
    printf("*px= %d\n",*px); // conteúdo da variável apontada por px, isto é, valor de x
    printf("*py= %d\n",*py); // imprime valor de x, pois py = px
    return 0;
}