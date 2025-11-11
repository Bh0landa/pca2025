#include <stdio.h>

double soma_harmonica(int N) {
	if(N <= 0) return 0.0;
	double soma = 0.0;
	for(int i = 1; i <= N; i++){
		soma += 1.0 / (double)i;
	}
	return soma;
}

int main(){
	int N;
	printf("Digite um inteiro positivo N: ");
	scanf("%d", &N);

	double S = soma_harmonica(N);
	printf("S = %.6f\n", S);
	return 0;
}