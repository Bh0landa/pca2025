#include <stdio.h>

int main() {
    float nota, soma = 0, media;
    int quantidade = 0;

    printf("Digite as notas dos alunos (digite -1 para encerrar):\n");

    while (1){
        printf("Nota: ");
        scanf("%f", &nota);

        if(nota == -1){
            break;
        }

        soma += nota;
        quantidade++;
    }
    
    media = soma / quantidade;
    
    printf("Media da turma: %.2f\n", media);
    return 0;
}