#include<stdio.h>
#include<locale.h>

int numeroA = 0, numeroB = 0;
int divisivel = 0;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("\nInsira um número inteiro: ");
	scanf("%d", &numeroA);
	printf("\nInsira um número outro número inteiro: ");
	scanf("%d", &numeroB);
	
	if(divisivel = numeroA % numeroB == 0){
		printf("\nO número %d é divisível por %d.", numeroA, numeroB);
	}else{
		printf("\nO número %d não é divisível %d.", numeroA, numeroB);
	}

	return 0;
}
