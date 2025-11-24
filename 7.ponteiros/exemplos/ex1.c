#include <stdio.h>

int main(){

    int v1, v2, *p, *q;
    v1 = 3;
    v2 = 12;
    p = &v1; // p recebe o endereço de memória de v1
    q = p; // copia o endereço guardado em p para q
    *q = 44; // altera o valor armazenado no endereço apontado por q

    printf("p = %p\n", p); // imprime o valor do ponteiro p
    printf("q = %p\n", q); // imprime o valor do ponteiro q
    printf("v1 = %d\n",v1); // imprime o valor de v1
    printf("v2 = %d\n",v2); // imprime o valor de v2
    return 0;
}