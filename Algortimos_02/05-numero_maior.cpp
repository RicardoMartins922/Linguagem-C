#include<stdio.h>
#include<locale.h>

float numero1 = 0.00, numero2 = 0.00;
int opcao = 0;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um n�mero: ");
	scanf("%f", &numero1);
	printf("\nInsira outro n�mero: ");
	scanf("%f", &numero2);
	
	printf("\nEscolha uma op��o:\n(1)Maior que ...\t(2)Menor que ...\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			if(numero1 > numero2){
				printf("\nO n�mero %.2f � maior que o n�mero %.2f", numero1, numero2);
			}else{
				printf("\nO n�mero %.2f � maior que o n�mero %.2f", numero2, numero1);
			}
			break;
		case 2:
			if(numero1 < numero2){
					printf("\nO n�mero %.2f � menor que o n�mero %.2f", numero1, numero2);
			}else{
				printf("\nO n�mero %.2f � menor que o n�mero %.2f", numero2, numero1);
			}
			break;
		default:
			printf("\nOp��o inv�lida.");
			break;
	}
	return 0;
}
