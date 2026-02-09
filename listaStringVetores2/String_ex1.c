/*1) Ler diversas palavras e informar:
a) quantas palavras iniciam pela letra x;
b) quantas palavras possuem a letra q;
c) quantas palavras não iniciam pela letra r ou s;
Determine um flag para finalizar a leitura. Tenha cuidado para que o flag não entre nos
cálculos*/
#include<stdio.h>
#include<string.h> // Biblioteca para usar funções de manipulação de strings

int main(void)
{
    char palavra[30]; // Array para armazenar uma palavra com até 29 caracteres (mais 1 para o caractere nulo)
    int i; // Variável de controle para loops
    int x = 0; // Contador de palavras que iniciam com a letra 'x'
    int q = 0; // Contador de palavras que possuem a letra 'q'
    int cont = 0; // Contador de palavras que não iniciam com as letras 'r' ou 's'
    int existe = 0; // Flag para indicar se a letra 'q' foi encontrada na palavra

    do {
        // Entrada de dados
        printf("Digite a palavra ou digite fim para encerrar: ");
        scanf("%s", palavra); // Lê uma palavra do usuário
        
        // Processamento
        
        // A) Contar palavras que iniciam com a letra 'x'
        if (palavra[0] == 'x') {
            x++;
        }
        
        // B) Verificar se a palavra possui a letra 'q'
        existe = 0; // Reseta a flag antes de verificar cada palavra
        for (i = 0; i < strlen(palavra); i++) {  //STRLEN: garante que o loop for itere exatamente sobre todos os caracteres da palavra digitada pelo usuário.
            if (palavra[i] == 'q') {
                existe = 1; // Altera a flag se a letra 'q' for encontrada na palavra
            }
        }
        if (existe == 1) {
            q++;   // Incrementa o contador se a letra 'q' foi encontrada na palavra
        }
        
        // C) Contar palavras que não iniciam com as letras 'r' ou 's'
        if (palavra[0] != 'r' && palavra[0] != 's') {
            cont++;
        }
        
    } while (strcmp(palavra, "fim") != 0); // Repete o loop até que a palavra digitada seja "fim"
    									// strcmp verifica se essa palavra é igual a "fim"ou seja compara duas strings 
    									//tem que ser diferente de zero para continuar se for igual encerra o loop pois na função strcmp
    									//quando Retorna 0 significa que as strings são idênticas.

    // Saída de resultados
    printf("Quantas palavras iniciam pela letra x: %d\n", x);
    printf("Quantas palavras possuem a letra q: %d\n", q);
    printf("Quantas palavras não iniciam pela letra r ou s: %d\n", cont);


}











	/*saber qual ultima letra da palavra
	 for(i = 0; i < strlen(palavra); i++) {
	 	if(palavra[strlen(palavra)-1]=='r')*/
	/*
	for(i = 0; i < strlen(palavra); i++) {
		if(palavra[i]=='r'){
			
		}*/
