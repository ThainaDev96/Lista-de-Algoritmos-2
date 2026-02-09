/*2. Fazer um programa que leia uma matriz 5 X 5 com números do intervalo de 0 a 50.
Imprimir a matriz em formato de matriz.*/

#include <stdio.h>
int main(void) {
    int matriz[5][5];
    int i, j;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            do {
                printf("Digite os valores (entre 0 e 50): ");
                scanf("%d", &matriz[i][j]);
                if(matriz[i][j] < 0 || matriz[i][j] > 50) {
                    printf("Valor fora do intervalo permitido (0 a 50). Tente novamente.\n");
                }
            } while(matriz[i][j] < 0 || matriz[i][j] > 50);
        }
    }

    printf("\nMatriz digitada:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}
//Usar while diretamente sem um do antes não faria sentido, pois não haveria ação (leitura do valor)
// para verificar a condição (intervalo de 0 a 50).
