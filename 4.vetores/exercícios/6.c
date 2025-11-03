#include <stdio.h>

int main(){
    int x[10];

    for(int i = 0; i < 10; i++){
        x[i] = i * 2;
        printf("%d \n", x[i]);
    }

    for(int i = 0; i < 10; i++){
        if(i != 0){
            x[i] = (i * 2) - 1;
            printf("%d \n", x[i]);
        }
        else{
            x[i] = 0;
            printf("%d \n", x[i]);
        }
    }
    return 0;
}