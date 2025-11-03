#include <stdio.h>
#include <ctype.h>

int main(){
    char codigo;
    float valor, total_vista = 0, total_prazo = 0, total_geral = 0;

    for(int i = 1; i <= 15; i++){
        printf("Transacao %d - Digite o codigo (V para a vista, P para a prazo): ", i);
        scanf(" %c", &codigo);

        printf("Digite o valor da transacao: R$");
        scanf("%f", &valor);
        
        codigo = toupper(codigo);
        
        if(codigo == 'V'){
            total_vista += valor;
        }
        else{
            total_prazo += valor;
        }
    }
    
    total_geral += valor;

    printf("Total das compras a vista: R$%.2f\n", total_vista);
    printf("Total das compras a prazo: R$%.2f\n", total_prazo);
    printf("Total das compras efetuadas: R$%.2f\n", total_geral);
    printf("Valor da primeira prestacao das compras a prazo juntas: R$%.2f\n", total_prazo / 3);
    return (0);
}
