#include<stdio.h>
#include<stdlib.h>

int main(){
	float n1,n2,n3,n4,md_A;
	
	printf("Insira as notas:\n");
	printf("NOTA 1: ");
	scanf("%f",&n1);
    
	printf("NOTA 2: ");
	scanf("%f",&n2);
	
	printf("NOTA 3: ");
	scanf("%f",&n3);
	
	printf("NOTA 4: ");
	scanf("%f",&n4);
	
	md_A=(n1+n2+n3+n4)/4;
	
	printf("\nSua media e = %5.2f" ,md_A);
	if(md_A>=7){
		printf("\nAPROVADO");
	}
	else{
		printf("\nREPROVADO");
	}
	system("pause");
	return 0;
}