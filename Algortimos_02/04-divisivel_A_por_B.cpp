#include<stdio.h>
#include<locale.h>

int numeroA = 0, numeroB = 0;
int divisivel = 0;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("\nInsira um n�mero inteiro: ");
	scanf("%d", &numeroA);
	printf("\nInsira um n�mero outro n�mero inteiro: ");
	scanf("%d", &numeroB);
	
	if(divisivel = numeroA % numeroB == 0){
		printf("\nO n�mero %d � divis�vel por %d.", numeroA, numeroB);
	}else{
		printf("\nO n�mero %d n�o � divis�vel %d.", numeroA, numeroB);
	}

	return 0;
}
