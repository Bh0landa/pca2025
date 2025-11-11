#include <stdio.h>
#define PI 3.14

double volume_esfera(double raio){
	if (raio <= 0.0) return 0.0;
	return (4.0 / 3.0) * PI * raio * raio * raio;
}

int main(){
	double r;
	printf("Entre com o raio da esfera: ");
	scanf("%lf", &r);
	double v = volume_esfera(r);
	printf("Volume da esfera (raio = %.2f) = %.2f\n", r, v);
	return 0;
}