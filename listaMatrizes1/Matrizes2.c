/*2. Ler uma matriz 3 X 3 com números inteiros. Percorrer a matriz e encontrar o maior valor. Exibilo.*/


#include <stdio.h>
int main(void) {
    int matriz[3][3];
    int i, j;
    int maiorValor= 0; 
    
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite os valores:");
            scanf("%d", &matriz[i][j]);
        }
        
    }
          
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
            if(matriz[i][j]> maiorValor) {
            	maiorValor= matriz[i][j];
            }
        }
    }
    
	
	printf("Matriz digitada:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
           	printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("O elemento maior eh: %d\n", maiorValor);
    
}

    
