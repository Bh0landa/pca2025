#include <stdio.h>
#include <limits.h>

#define W 5
#define P 10

int main(){
    int M[W][P], i, j, total_qtd_produto[P], total_qtd_armazem[W], max_unico = -1, max_prod = -1, min_stock = INT_MAX;
    float V[P], cust_armazem[W];

    for(i=0; i<P; i++){
        printf("Digite o valor do produto %d: R$ ", i+1);
        scanf("%f", &V[i]);
        for(j=0; j<W; j++){
            printf("Digite a quantidade desse produto no armazem %d: ", j+1);
            scanf("%d", &M[j][i]);
        }
    }
    
    for(i=0;i<P;i++) total_qtd_produto[i]=0;
    for(j=0;j<W;j++){ total_qtd_armazem[j]=0; cust_armazem[j]=0.0f; }
    for(i=0; i<P; i++){
        for(j=0; j<W; j++){
            int q = M[j][i];
            total_qtd_produto[i] += q;
            total_qtd_armazem[j] += q;
            cust_armazem[j] += q * V[i];

            if(q > max_unico){
                max_unico = q;
                max_prod = i;
            }
            if(q < min_stock) min_stock = q;
        }
    }

    printf("\n--- Relatorio de Estoques e Custos ---\n\n");

    for(j=0; j<W; j++){
        printf("Armazem %d: quantidade total de itens = %d\n", j+1, total_qtd_armazem[j]);
    }
    printf("\n");

    for(i=0; i<P; i++){
        printf("Produto %d: quantidade total em todos os armazens = %d (preco R$ %.2f)\n", i+1, total_qtd_produto[i], V[i]);
    }
    printf("\n");

    if(max_prod >= 0){
        printf("Produto com maior estoque em um unico armazem: Produto %d (quantidade = %d), preco = R$ %.2f\n", max_prod+1, max_unico, V[max_prod]);
    }

    if(min_stock != INT_MAX){
        printf("Menor estoque armazenado em qualquer celula = %d\n", min_stock);
    }
    printf("\n");

    for(j=0; j<W; j++){
        printf("Custo total do armazem %d = R$ %.2f\n", j+1, cust_armazem[j]);
    }

    return 0;
}