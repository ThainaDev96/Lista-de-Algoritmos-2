#include<stdio.h>
#include<strings.h>
int main(void)
{
	char palavra[10];
	
	printf("Digite a palavra");
	scanf("%s", &palavra);
	
	//gets(palavra);
	
	printf("A palavra %s",palavra);
	
	//puts(palavra);
	
	printf("Tamanho da palavra %d",strlen(palavra) );
}
