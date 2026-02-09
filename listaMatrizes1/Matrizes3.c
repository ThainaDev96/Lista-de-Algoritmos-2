/*3. Dada uma matriz de ordem 3x3 faça um algoritmo que:
a) Calcule a soma dos elementos da primeira coluna;
b) Calcule o produto dos elementos da primeira linha;
c) Calcule a soma de todos os elementos da matriz;*/

#include <stdio.h>

int main(void) {
    int matriz[3][3];
    int i, j;
    int somaColuna = 0;
    int produto = 1; // Inicializar produto como 1 para multiplicação correta
    int somaTotal = 0;
    
    // Entrada de dados
    printf("Digite os valores:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // A) Soma dos elementos da primeira coluna
    for(i = 0; i < 3; i++) {
        somaColuna += matriz[i][0]; // Somar apenas a primeira coluna (j = 0)
    }
    
    // B) Produto dos elementos da primeira linha
    for(j = 0; j < 3; j++) {
        produto *= matriz[0][j]; // Multiplicar apenas a primeira linha (i = 0)
    }
    
    // C) Soma de todos os elementos da matriz
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            somaTotal += matriz[i][j];
        }
    }
    
    printf("\nMatriz digitada:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

   
    printf("\nA soma dos elementos da primeira coluna: %d\n", somaColuna);
    printf("O produto dos elementos da primeira linha: %d\n", produto);
    printf("A soma de todos os elementos da matriz: %d\n", somaTotal);
    
   
}

   


