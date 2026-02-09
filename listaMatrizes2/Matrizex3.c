/*3. Fazer um programa que leia números inteiros para preencher uma matriz 4 X 4 e os
exiba em formato de matriz omitindo os valores da diagonal principal.*/

#include <stdio.h>
int main(void) {
    int matriz[4][4];
    int i, j;
    
	for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite os valores:");
            scanf("%d", &matriz[i][j]);
        }
    }
    
	for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i != j) {//conceito de matrizes:se i == j entao,é a diagonal principal
                printf("%d ", matriz[i][j]);//se forem diferentes imprime a matriz normalmente se for igual imprime um vazio.
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }
    
   
}


