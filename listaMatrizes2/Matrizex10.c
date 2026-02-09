/*10. Escrever um programa que preenche uma matriz 6 X 6, com o elemento * (asterisco) as
posições acima da diagonal principal e com o elemento @ (arroba) as posições abaixo da
diagonal principal.*/ 

#include <stdio.h>
int main(void) {
    char matriz[6][6];//Char por que a matriz sera preenchida com caracteres
    int i, j;
    
    
	   for (i = 0; i < 6; i++) { // Linhas 
        for (j = 0; j < 6; j++) { //Colunas 
            if (i < j) { // Condição: posição acima da diagonal principal
                matriz[i][j] = '*'; 
            } else if (i > j) { // Condição: posição abaixo da diagonal principal
                matriz[i][j] = '@'; 
            } else { // Condição: diagonal principal
                matriz[i][j] = ' '; // Preenche com espaço em branco
            }
        }    
    }
    
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    
}
/*
* @ @ @ @ @  @ maior que a diagonal
* * @ @ @ @ 
* * * @ @ @ 
* * * * @ @ 
* * * * * @  * menor que a linha da diagonal
* * * * * *
*/


