#include<stdio.h>
#include<stdlib.h>

#define AUMENTO_1 0.30
#define AUMENTO_2 0.15

float salario = 0.00;
float novoSalario = 0.00;

int main() {
	
	printf("\nInsira seu salario:R$");
	scanf("%f", &salario);
	
	if(salario <= 300.00){
		novoSalario = salario*(1+AUMENTO_1);
		printf("\nO seu novo salario e:R$%.2f", novoSalario);
	}else if(salario > 300.00){
		novoSalario = salario*(1+AUMENTO_2);
		printf("\nO seu novo salario e:R$%.2f", novoSalario);
	}
	
	system("pause");
	return 0;
}
