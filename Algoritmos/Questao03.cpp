#include<stdio.h>
#include<stdlib.h>
int main()
{
	float num1=0.00,num2=0.00;

	printf("QUAL O MENOR NUMERO?\n");
	
	printf("\nInsira um numero: ");
	scanf("%f", &num1);
	printf("\nInsira outro numero: ");
	scanf("%f", &num2);

	if(num1>num2)
	{
		printf("\nO menor entre os dois numeros digitado e %5.3f",num2,"\n");
	}
	else
	{
		printf("\nO menor entre os dois numeros digitados e %5.3f",num1,"\n");
	}
	
	system("pause");
	return 0;
}
