/*4. Escrever um programa que leia uma matriz de ordem 3 X 3. Após percorrer esta matriz
para encontrar ocorrências do número 20. Guardar as posições em vetores: um para linha e
outro para coluna. Ao final do processo exibir as posições (linha e coluna) onde o número
20 está posicionado. Se não houve ocorrências, mostrar mensagem adequada*/

#include <stdio.h>

int main(void) {
    int matriz[3][3];
    int vetorLinha[9], vetorColuna[9];
    int i, j, k = 0; // Inicialize k com zero
    
    // Entrada de dados
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
      // Exibição da matriz digitada
    printf("\nMatriz digitada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\n", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Busca pelo número 20 na matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] == 20) {
                vetorLinha[k] = i;      // Armazena a linha onde foi encontrado o 20
                vetorColuna[k] = j;     // Armazena a coluna onde foi encontrado o 20
                k++;                    // Incrementa o contador de ocorrências
            }
        }
    }
    
    // Se não houver ocorrências
    if (k == 0) {
        printf("Não foram encontradas ocorrências do número 20 na matriz.\n");
    } else {
        printf("Posições onde o número 20 foi encontrado:\n");
        for (i = 0; i < k; i++) {
            printf("Linha: %d, Coluna: %d\n", vetorLinha[i], vetorColuna[i]);
        }
    }
    
   
}

