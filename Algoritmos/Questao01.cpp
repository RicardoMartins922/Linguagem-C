#include<stdio.h>
#include<stdlib.h>

int main(){
	float nota1=0.00,nota2=0.00,nota3=0.00,nota4=0.00;
	float media_aluno=0.00;
	
	printf("Insira as notas:\n");
	printf("NOTA 1: ");
	scanf("%f",&nota1);
	printf("NOTA 2: ");
	scanf("%f",&nota2);
	printf("NOTA 3: ");
	scanf("%f",&nota3);
	printf("NOTA 4: ");
	scanf("%f",&nota4);
	
	media_aluno=(nota1+nota2+nota3+nota4)/4;
	
	printf("\nSua media e = %5.2f" ,media_aluno);
	if(media_aluno>=7){
		printf("\nAPROVADO");
	}
	else{
		printf("\nREPROVADO");
	}
	system("pause");
	return 0;
}