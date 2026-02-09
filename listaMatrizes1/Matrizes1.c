/*1. Escrever um programa que lê uma matriz M de 6 linhas X 5 colunas e escreve a quantidade de 
elementos iguais a 0 (zero) da matriz.*/

#include <stdio.h>

int main(void) {
    int matrizM[6][5];
    int i, j;
    int elementos_zero = 0; 
    
    
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 5; j++) {
            printf("Digite os valores:");
            scanf("%d", &matrizM[i][j]);//Ao inves de colocar entre colchetes as posições coloque a variavel do loop(i=linha j=coluna)
        }
    }
    
    
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 5; j++) {
            if(matrizM[i][j] == 0) {
                elementos_zero++;
            }
        }
    }
    
    printf("Matriz digitada:\n");
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 5; j++) {
           	printf("%d ", matrizM[i][j]);
        }
        printf("\n");
    }
    
    	
    printf("Elementos iguais a zero: %d\n", elementos_zero);
    
}

