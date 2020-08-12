#include<stdio.h>
#include<stdlib.h>

#define AUMENTO 0.3

float salario = 0.00;
float novoSalario = 0.00; 

int main() {
	
	printf("\nInsira o valor do seu salario:R$");
	scanf("%f", &salario);
	
	if(salario < 500.00){
		novoSalario = salario*(1+AUMENTO);
		printf("\nO seu novo salario e:R$%.2f", novoSalario,"\n");
	}else{
		printf("\n Desculpe, voce nao esta apto ao aumento.\n");
	}
	
	system("pause");
	return 0;
}
