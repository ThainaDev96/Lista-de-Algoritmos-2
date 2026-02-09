/*1. Dado uma matriz de ordem 3x3 faça um algoritmo que calcule a soma da diagonal
principal(i==j linha é igual coluna).*/

#include <stdio.h>

int main(void) {
    int matriz[3][3];
    int i, j;
    int soma = 0;

    // Entrada de dados
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite os valores:\n");
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma da diagonal principal
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                soma += matriz[i][j];
            }
        }
    }

    printf("\nMatriz digitada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nA soma dos elementos da diagonal principal eh: %d\n", soma);

    
}


