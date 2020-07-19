#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float num1=0.00, num2=0.00, med=0.00, sub=0.00, div=0.00, mult=0.00;
	int opc=0;
	
	printf("\nInsira um numero: ");
	scanf("%f", &num1);
	printf("\nInsira outro numero: ");
	scanf("%f", &num2);
	printf("\nO QUE QUER FAZER?\n(1)calcular media\t(2)subtracao\n(3)multiplicacao\t(4)divisao \n");
	scanf("\n%d", &opc);
	
	switch(opc){
		case 1:
			med=(num1+num2)/2;
			printf("\nA media e = %5.1f ",med);
		break;
		case 2:
			sub=num1-num2;
			printf("\nA subtracao do %5.1f por %5.1f = %5.1f ",num1,num2,sub);
		break;
		case 3:
			mult=num1*num2;
			printf("\nA multiplicacao de %5.1f por %5.1f = %5.1f ",num1,num2,mult);
		break;
		case 4:
			div=num1/num2;
			if(num2!=0){
			printf("\nA divisao de %5.1f por %5.1f = %5.1f ",num1,num2,div);
			}else{
				printf("\nIMPOSSIVEL DIVIDIR POR 0");
			}
		break;
		default:
			printf("\nERRO!!");
	}
	
	system("pause");
	return 0;
}