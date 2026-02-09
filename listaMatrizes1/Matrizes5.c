/*5. Escreva um programa que leia uma matriz de 4X4 com números inteiros e divida todos os seus 
elementos pelo menor valor da matriz, armazenando em outra matriz. No final, mostrar as duas 
matrizes.*/


#include <stdio.h>
int main(void) {
    int matriz[4][4];
    int i, j;
    int menorValor=999;
    float matriz_dividida[4][4]; // Nova matriz para armazenar os resultados da divisão
    
    
    //entrada de dados
	for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Digite os valores:");
            scanf("%d", &matriz[i][j]);
        }
    }//processamento(aqui se encontra o menor valor dos elementos da matriz).
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
            if(matriz[i][j]< menorValor) {     //primeiro matriz
            	menorValor= matriz[i][j];
            }
        }
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {	//segunda matriz(armazeno em uma segunda matriz,o resultado da divisao de todos elementos da priemeira pelo menor valor.
    		matriz_dividida[i][j] = (float)matriz[i][j] / menorValor;
    	}
    }

	
	printf("Matriz digitada:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
           	printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    	printf("Matriz dividida:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
           	printf("%f ", matriz_dividida[i][j]);
        }
        printf("\n");
    }

    

    printf("O elemento menor eh: %d\n", menorValor);
	
}

    
