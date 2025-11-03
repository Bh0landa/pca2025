#include <stdio.h>

int main(){
    int x [10] [10], t, p;

    for(t = 0, p = 0; t < 10; t++, p++){
        x[t] [p] = t * p;
        printf("x[%d][%d] = %d\n", t , p, x[t][p]);
    }
    return 0;
}