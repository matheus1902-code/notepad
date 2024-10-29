#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int numGlonal;

int main(){
	
	float numQuebrado;
	
	char letter = 'a';
	bool ativo = true;
	int i;

	for(i = 0; i<= 10; i++){
		printf("\n%d", i);
	
	}
	
	while(ativo){
	   printf("\nAtivo");     
	   ativo = false;
	}
	
	do{
		printf("Vai executar independente da condição");
	}while(ativo);
	
	if(ativo == true){
		printf("\nAtivo");
	}else{
		printf("\nInativo");
	}
	
	int opcao;
	printf("\n Bem vindo ao sistema C");
	printf("\n Digite a opcao desejada");
	printf("\n 1- Cadastro");
	printf("\n 2- Login");
	printf("\n 3- Sair");
	printf("\n Digite a opcao desejada: ");
	scanf("%d", opcao);
	
	switch(opcao){
		case 1:
			printf("OLa vc pode se cadastrar");
			break;
		case 2:
			printf("Ola vc pode logar");
			break;
		case 3:
			printf("Saindo");
			break;
		default:
			printf("Erro");
	}
}