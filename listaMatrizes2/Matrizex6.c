/*6. Escrever um programa que lê uma matriz M de 6 linhas X 5 colunas e escreve:
a) a média dos elementos de cada linha;
b) a quantidade de elementos pares da matriz.
*/
#include <stdio.h>

int main(void) {
    int matriz[6][5];
    int i, j;
    float somaLinha;
    int contPares = 0;
    float media = 0;
    
    // Entrada de dados
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Exibição da matriz digitada
    printf("\nMatriz digitada:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Cálculo da média dos elementos de cada linha
    printf("\nMédia dos elementos de cada linha:\n");
    for (i = 0; i < 6; i++) {
        somaLinha = 0;
        for (j = 0; j < 5; j++) {
            somaLinha += matriz[i][j];  //soma das linhas pelo metodo de atribuição ,posteriormente serve para calcular a media.
            if (matriz[i][j] % 2 == 0) {  //para testar se é par o resto da divisao por dois tem que ser igual a zero, se é impar é por um.
                contPares++;
            }
        }
        media = somaLinha / 5.0; // Média da linha dividida pelo número de colunas (5)
        
        //media da linha = soma dos elementos da linha / numero de colunas
        //media da coluna = soma dos elementos da coluna / numero de linhas 
        
        
        printf("Média da linha %d: %.2f\n", i + 1, media); // i + 1 para exibir linha 1 ao invés de linha 0
    }
    
    // Quantidade de elementos pares na matriz
    printf("\nQuantidade de elementos pares na matriz: %d\n", contPares);
    
   
}


