#include<stdio.h>
#include<stdlib.h>

int main()
{
	float not_1,not_2, med;
	
	printf("\nInsira a primeira nota: ");
	scanf("%f", &not_1);
	
	printf("\nInsira a segunda nota: ");
	scanf("%f", &not_2);
	
	med=((not_1+not_2)/2);
	
	if(med>=0 && med<3){
		printf("\nSua media e = %5.2f ", med);
		printf("\nREPROVADO.");
	}
	else if(med>=3 && med<7){
		printf("\nSua media e = %5.2f", med);
		printf("\nEXAME");
	}
	else if(med>=7 && med<=10){
		printf("\nSua media e = %5.2f", med);
		printf("\nAPROVADO");
	}
	system("pause");
	return 0;
}