#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	char name[10];
	char word[10];
	
	printf("Digite seu nome: ");
	scanf("%s", &name);
	
	printf("Digite uma palavra: ");
	scanf("%s", &word);
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("O nome é: %s\n", name);
	printf("A palavra é: %s\n", word);
	
	strcpy(word, name);
	
	printf("O nome é: %s\n", name);
	printf("A palavra é: %s\n", word);
	
	system("pause");
	return 0;
}
