/*4. Escrever um programa que lê uma matriz M de 6 linhas X 5 colunas e escreve:
a) a quantidade de elementos negativos da matriz;
b) a soma dos elementos da primeira coluna da matriz.
*/

#include <stdio.h>

int main(void) {
    int matriz[6][5];
    int i, j;
    int somaColuna = 0;
    int elementos_negativos = 0;

    // Entrada de dados
    printf("Digite os valores:\n");
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // A) Soma dos elementos da primeira coluna
    for(i = 0; i < 6; i++) { //inverso.quer coluna utiliza loop linha
        somaColuna += matriz[i][0]; //acessa coluna 0 da linha i, que é o que precisa para somar todos os elementos da primeira coluna. coluna j=0
    }

    // B) Contagem de elementos negativos
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 5; j++) {
            if (matriz[i][j] < 0) {
                elementos_negativos++;
            }
        }
    }

    printf("\nMatriz digitada:\n");
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n A soma dos elementos da primeira coluna: %d\n", somaColuna);
    printf("Quantidade de elementos negativos: %d\n", elementos_negativos);

    
}

   
