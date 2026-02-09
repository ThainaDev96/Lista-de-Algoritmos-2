/*9. Dada uma matriz 3 X 3, onde toda a primeira coluna deve ser preenchido com o número
0 (zero), a segunda coluna com o número 1 (um) e a terceira coluna com o número dois
(dois).*/

#include <stdio.h>

int main(void) {
    int matriz[3][3]; // Declaração da matriz 3x3
    int i, j;
    
    for (i = 0; i < 3; i++) { // Linhas
        for (j = 0; j < 3; j++) { // Colunas
            if (j == 0) { // Se estiver na primeira coluna
                matriz[i][j] = 0; // Preenche com o número 0 (zero)
            } else if (j == 1) { // Se estiver na segunda coluna
                matriz[i][j] = 1; // Preenche com o número 1 (um)
            } else { // Se estiver na terceira coluna
                matriz[i][j] = 2; // Preenche com o número 2 (dois)
            }
        }    
    }
    
    // Exibição da matriz preenchida
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            printf("%d ", matriz[i][j]); 
        }
        printf("\n"); 
    }
    
}

