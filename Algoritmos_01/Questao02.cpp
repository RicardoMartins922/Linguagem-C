#include<stdio.h>
#include<stdlib.h>

int main()
{
	float nota_1=0.00,nota_2=0.00;
	float media=0.00;
	
	printf("\nInsira a primeira nota: ");
	scanf("%f", &nota_1);
	printf("\nInsira a segunda nota: ");
	scanf("%f", &nota_2);
	
	media=((nota_1+nota_2)/2);
	
	if(media>=0 && media<3){
		printf("\nSua media e = %5.2f ", media);
		printf("\nREPROVADO.");
	}
	else if(media>=3 && media<7){
		printf("\nSua media e = %5.2f", media);
		printf("\nEXAME");
	}
	else if(media>=7 && media<=10){
		printf("\nSua media e = %5.2f", media);
		printf("\nAPROVADO");
	}
	system("pause");
	return 0;
}