/*11. Dada uma matriz A (n x m) imprimir o número de linhas e o número de colunas nulas
da matriz. Exemplo:
0 0 0 0
1 0 2 2
4 0 5 6
0 0 0 0
tem duas linhas nulas e uma coluna nulas. */
	
#include <stdio.h>
int main(void) {
    int matrizA[4][4]; 
     int linhaNula = 0, colunaNula = 0;
    int contL, contC;
    int i, j;
    
    // Verificando linhas nulas
    for (i = 0; i < 4; i++) {
        contL = 0; // Reinicia o contador para cada nova linha
        for (j = 0; j < 4; j++) {
            if (matrizA[i][j] == 0) {
                contL++;
            }
        }
        if (contL == 4) { // Se toda a linha for nula (contL igual ao número de colunas)
            linhaNula++;
        }
    }
    
    // Verificando colunas nulas
    for (j = 0; j < 4; j++) {
        contC = 0; // Reinicia o contador para cada nova coluna
        for (i = 0; i < 4; i++) {
            if (matrizA[i][j] == 0) {
                contC++;
            }
        }
        if (contC == 4) { // Se toda a coluna for nula (contC igual ao número de linhas)
            colunaNula++;
        }
    }
    
    // Exibindo o resultado
    printf("Número de linhas nulas: %d\n", linhaNula);
    printf("Número de colunas nulas: %d\n", colunaNula);
    
    
    
    
    
  
