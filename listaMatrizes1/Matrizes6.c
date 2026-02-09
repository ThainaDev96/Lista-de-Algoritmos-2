/*6. Dada uma matriz de 5 X 5 e dois vetores de 5 posições que armazenam números reais. Escreva 
um programa que leia valores para a matriz, calcule a soma das colunas, armazenando o resultado 
em um dos vetores, e o produto das linhas, armazenando no outro vetor. Ao final escrever a matriz e 
os dois vetores.*/

#include <stdio.h>

int main(void) {
    int matriz[5][5];
    int vetor1[5] = {0}; // Inicializa vetor1 com zeros
    int vetor2[5] = {1}; // Inicializa vetor2 com n 1 para multiplicação
    int i, j;

    // Entrada de dados para a matriz
    printf("Digite os valores:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // A) Soma dos elementos das colunas(tudo)
    for (j = 0; j < 5; j++) {   //percorre linhas e colunas (tudo)
        for (i = 0; i < 5; i++) {
            vetor1[j] += matriz[i][j];   //soma somente coluna por coluna j
        }
    }

    // B) Produto dos elementos das linhas
    for (i = 0; i < 5; i++) {
    	 vetor2[i] = 1;//renicializa para cada linha	//percorre linhas e colunas(tudo) 
        for (j = 0; j < 5; j++) {
            vetor2[i] *= matriz[i][j];					//multiplica somente linha por linha i
        }
    }

    printf("\nMatriz digitada:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nVetor 1 (soma das colunas):\n");
    for (j = 0; j < 5; j++) {
        printf("%d ", vetor1[j]);
    }
    printf("\n");

    printf("\nVetor 2 (produto das linhas):\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

   
}

