/*Questão 2: Escrever um programa que leia um vetor com 40 números inteiros. Depois da leitura inicial, criar outro vetor que receba a divisão de todos
os elementos do vetor lido pelo menor valor que está armazenado no vetor lido. Mostrar os dois vetores*/

#include <stdio.h>
int main(void) {
    int matriz[40][40];
    int i, j;
    int menorValor=999;
    float matriz_dividida[40][40]; // Nova matriz para armazenar os resultados da divisão

    //entrada de dados
	for(i = 0; i < 40; i++) {
        for(j = 0; j < 40; j++) {
             printf("Digite os valores para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }//processamento(aqui se encontra o menor valor dos elementos da matriz).
	for(i = 0; i < 40; i++) {
		for(j = 0; j < 40; j++) {
            if(matriz[i][j]< menorValor) {     
            	menorValor= matriz[i][j];
            }
        }
    }
    for (i = 0; i < 40; i++) {
        for (j = 0; j < 40; j++) {	
    		matriz_dividida[i][j] = (float)matriz[i][j] / menorValor;//armazeno em uma segunda matriz,o resultado da divisao de todos elementos da primeira pelo menor valor.
    	}
    }

	
	printf("Matriz digitada:\n");
    for(i = 0; i < 40; i++) {
        for(j = 0; j < 40; j++) {
           	printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    	printf("Matriz dividida:\n");
    for(i = 0; i < 40; i++) {
        for(j = 0; j < 40; j++) {
           	printf("%f ", matriz_dividida[i][j]);
        }
        printf("\n");
    }

    

    printf("O elemento menor eh: %d\n", menorValor);
	
}

