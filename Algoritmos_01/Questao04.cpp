#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float num1=0.00,num2=0.00,num3=0.00;
	
	printf("QUAL O MAIOR NUMERO?\n");
	printf("\nInsira um numero: ");
	scanf("%f", &num1);
	printf("\nInsira outro numero: ");
	scanf("%f", &num2);
	printf("\nInsira outro numero: ");
	scanf("%f", &num3);
	

	if(num1>num2 && num1>num3)
	{
		printf("\nO maior entre os numeros digitado e %5.2f",num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("\nO maior entre os numeros digitados e %5.2f",num2);
	}
	else if(num3>num1 && num3>num2)
	{
		printf("\nO maior entre os numeros digitados e %5.2f",num3);
	}
	
	system("pause");
	return 0;
}