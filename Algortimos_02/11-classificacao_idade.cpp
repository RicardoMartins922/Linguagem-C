#include<stdio.h>
#include<locale.h>

int idade = 0;
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 18 && idade < 65){
		printf("\nVoc� � uma pessoa maior de idade.");
	}else if(idade >=0 && idade < 18){
		printf("\nVoc� � uma pessoa menor de idade.");
	}else{
		printf("\nVoc� � uma pessoa idosa");
	}
	
	return 0;
}
