#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	float numero1 = 0.00, numero2 = 0.00;
	int opcao = 0;
	float potencia = 0.00, raizQ = 0.00, raizC = 0.00;
	
	
	printf("Insira dois numeros: ");
	scanf("%f %f", &numero1,&numero2);
	
	printf("Escolha uma das opcoes: [1]Potencia\t[2]Raiz quadrada\t[3]Raiz cubica\n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			potencia = pow(numero1, numero2);
			printf("O resutado e: %f", potencia);
			break;
		case 2:
			raizQ = sqrt(numero1);
			printf("O resultado e: %.2f\n", ceil(raizQ));
			raizQ = sqrt(numero2);
			printf("O resultado e: %.2f\n", ceil(raizQ));
			break;
		case 3:
			raizC = pow(numero1,0.3333);
			printf("O resultado e: %.2f\n", ceil(raizC));
			raizC = pow(numero2,0.3333);
			printf("O resultado e: %.2f\n", ceil(raizC));
			break;
		default:
			printf("Opcao invalida!\n");
			break;
		
			
	}
	
	system("pause");
	return 0;
}
