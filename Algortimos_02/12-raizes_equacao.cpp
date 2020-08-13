#include<stdio.h>
#include<locale.h>
#include<math.h>

#define EXPOENTE 2
float a = 0.00, b = 0.00, c = 0.00, delta = 0.00;
float raiz01 = 0.00, raiz02 = 0.00;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira os valores dos coeficientes:\nCoeficiente a= ");
	scanf("%f", &a);
	printf("Coeficiente b= ");
	scanf("%f", &b);
	printf("Coeficiente c= ");
	scanf("%f", &c);
	
	delta = (pow((b), EXPOENTE)-4*a*c);
	raiz01 = ((-(b) + sqrt(delta))/(2*a));
	raiz02 = ((-(b) - sqrt(delta))/(2*a));
	
	printf("\nAs raizes da equação são:\nX=%.2f\nX=%.2f", raiz01, raiz02);
	printf("\nO conjunto solução da equação é:\nS={%.2f ; %.2f}", raiz01, raiz02);
	
	return 0;
}
