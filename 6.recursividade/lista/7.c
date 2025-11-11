#include <stdio.h>

int perfeito(int n){
	if(n <= 1) return 0;

	int soma = 1;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			int outro = n / i;
			soma += i;
			if(outro != i)
                soma += outro;
		}
	}

	return (soma == n) ? 1 : 0;
}

int main(){
	int n;
	printf("Digite um inteiro: ");
	scanf("%d", &n);

	int res = perfeito(n);
	printf("%d\n", res);
	return 0;
}