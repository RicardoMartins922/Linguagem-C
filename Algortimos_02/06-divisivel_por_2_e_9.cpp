#include<stdio.h>
#include<locale.h>

int numero = 0;
int divisivel2 = 0, divisivel9 = 0;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um n�mero inteiro: ");
	scanf("%d", &numero);
	
	divisivel2 = numero%2;
	divisivel9 = numero%9;
	
	if(divisivel2 == 0 && divisivel9 == 0){
		printf("\nO n�mero %d � divis�vel por 2 e por 9.", numero);
	}else if(divisivel2 == 0 && divisivel9 != 0){
		printf("\nO n�mero %d � divis�vel por 2, por�m n�o � divis�vel por 9.", numero);
	}else if(divisivel9 == 0 && divisivel2 != 0){
		printf("\nO n�mero %d � divis�vel por 9, por�m n�o � divis�vel por 2.", numero);
	}else{
		printf("\nO n�mero %d n�o � divis�vel por 2 e nem por 9.", numero);
	}
	
	return 0;
}
