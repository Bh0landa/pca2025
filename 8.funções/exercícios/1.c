#include <stdio.h>
void dobrar(int *x, int *y, int *z) {
    *x = *x * 2;
    *y = *y * 2;
    *z = *z * 2;
}

int main() {
    int a, b, c;
    
    printf("Digite digite o valor de ""a"": ");
    scanf("%d", &a);
    printf("Digite digite o valor de ""b"": ");
    scanf("%d", &b);
    printf("Digite digite o valor de ""c"": ");
    scanf("%d", &c);
    dobrar(&a, &b, &c);
    printf("Numeros dobrados: %d %d %d\n", a, b, c);
    return 0;
}