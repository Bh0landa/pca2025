#include <stdio.h>
#include <ctype.h>

double peso_ideal(double alt, char sexo){
	char s = (char) toupper((unsigned char)sexo);
	
    if(s == 'M'){
		return 72.7 * alt - 58.0;
	}
    if(s == 'F'){
		return 62.1 * alt - 44.7;
	}
	return -1.0;
}

int main(){
	double alt;
	char sexo;
	printf("Digite a altura (m) e o sexo (M/F), separados por espaço: ");
	scanf("%lf %c", &alt, &sexo);

	double p = peso_ideal(alt, sexo);

	printf("Peso ideal: %.2f kg\n", p);
	return 0;
}

