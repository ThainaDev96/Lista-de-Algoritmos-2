/*1) Escrever um programa que lê as notas dos alunos de uma determinada classe e as 
armazena num vetor. Depois lista as notas que são menores que 5.0. O número de 
alunos da classe é igual a 10.*/

 //Uso do for um bloco de entrada de dados , processamento de dados,mostrar os vetores.
#include <stdio.h>
int main(void) {
	float notas[10];  //capacidade para armazenar notas de 10 alunos em uma variável
	int cont;//variavel do loop for
	
	for(cont=0; cont<10;cont++){ //entrada de dados , com 1 bloco de dados
		printf("informe a nota : %d  ", cont+1); //O + 1 serve para que sejam numerados de 1 a 10 para ser mais intuitivo para o usuário
		scanf("%f",&notas[cont]);//se utiliza a variavel cont ao inves das posicoes
	}
	
	for(cont=0; cont<10;cont++){  //Após a entrada de dados, outro loop for é usado. Ele verifica se cada nota é maior que 5 e, se for, imprime essa nota.
		if(notas[cont]>5)   //verifica se a nota armazenada na posição cont(todas as notas do intevalo) do vetor notas é maior que 5.
		{
			printf("Nota maior que 5 %2.f\n : ", notas[cont]);
		}
	}
	
	for(cont=0; cont<10;cont++){  //Terceiro loop for é usado para imprimir todas as notas
		printf("Nota: %2.f \n", notas[cont]);
	}	
	
}
	
	
	
	
	
