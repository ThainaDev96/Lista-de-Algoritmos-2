/*5. Ler uma matriz 5 X 5 com números inteiros positivos e negativos. Depois, percorrer a
matriz e criar dois vetores: um com os números positivos e outro com os negativos. Os dois
vetores criados, não poderão possuir espaços em branco entre os elementos.*/

#include <stdio.h>

int main(void) {
    int matriz[5][5];
    int i, j;
    int positivos[25], negativos[25]; //2 vetores
    int contPositivo = 0, contNegativo = 0; //variavel para o loop dos vetores
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("Digite os numeros:[%d][%d]: ", i, j);
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
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if (matriz[i][j] >= 0) {
                positivos[contPositivo] = matriz[i][j]; //não pode usar as posições 25 nos colchetes e sim a varavel para o vetor
                	contPositivo++;
            
            } else {
                negativos[contNegativo] = matriz[i][j];
                	contNegativo++;
                	
            //Sempre use um índice ao atribuir valores a um vetor.
            //positivos[contPositivo++] = matriz[i][j]; armazena matriz[i][j] no vetor positivos na posição contPositivo e então incrementa contPositivo
            }
        }
    }
    

    printf("Vetor de numeros positivos:\n");
    for(i = 0; i < contPositivo; i++) {
        printf("%d ", positivos[i]);
    }
    printf("\n");

    printf("Vetor de numeros negativos:\n");
    for(i = 0; i < contNegativo; i++) {
        printf("%d ", negativos[i]);
    }
    printf("\n");


}

	
