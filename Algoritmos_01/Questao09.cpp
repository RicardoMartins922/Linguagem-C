#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define PERCENTUAL1 0.3
#define PERCENTUAL2 0.25
#define PERCENTUAL3 0.2
#define PERCENTUAL4 0.1

float saldoMedio = 0.00;
float credito = 0.00;

int main(){
	setlocale(LC_ALL,"Portuguese");   //pega as caracter�sticas da linguagem portuguesa.
	
	printf("Insira o saldo m�dio: R$");
	scanf("%f", &saldoMedio);
	
	if(saldoMedio > 400.00){
		credito = saldoMedio*(1+PERCENTUAL1);
		printf("\nO seu saldo m�dio �:R$%.2f", saldoMedio,"\n");
		printf("\nO cr�dito cedido pelo banco �:R$%.2f", credito,"\n");
		
	}else if(saldoMedio <= 400.00 && saldoMedio > 300.00){
		credito = saldoMedio*(1+PERCENTUAL2);
		printf("\nO seu saldo m�dio �:R$%.2f", saldoMedio,"\n");
		printf("\nO cr�dito cedido pelo banco �:R$%.2f", credito,"\n");
		
	}else if(saldoMedio <= 300.00 && saldoMedio > 200.00){
		credito = saldoMedio*(1+PERCENTUAL3);
		printf("\nO seu saldo m�dio �:R$%.2f", saldoMedio,"\n");
		printf("\nO cr�dito cedido pelo banco �:R$%.2f", credito,"\n");
		
	}else if(saldoMedio <= 200.00){
		credito = saldoMedio*(1+PERCENTUAL4);
		printf("\nO seu saldo m�dio �:R$%.2f", saldoMedio,"\n");
		printf("\nO cr�dito cedido pelo banco �:R$%.2f", credito,"\n");
	}
	
	system("pause");
	return 0;
}
