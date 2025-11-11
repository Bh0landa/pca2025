#include <stdio.h>

double delta(double a, double b, double c){
	return b * b - 4.0 * a * c;
}

int main(){
	double a, b, c;
	printf("Digite os valores de a, b e c (separados por espaço ou ENTER):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

	double d = delta(a, b, c);
	printf("Delta = %g\n", d);
	return 0;
}