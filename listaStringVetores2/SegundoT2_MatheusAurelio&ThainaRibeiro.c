/* FACULDADE DOM BOSCO DE PORTO ALEGRE
* Sistemas de Informação & Análise e Desenvolvimento de Sistemas
* Algoritmos
*
* Programa SegundoT2:
* -------------------------
* Objetivo do Programa:Guardar as palavras solicitadas e exibir os resultados de acordo
* com as ordens descritas
* Autor:Matheus Aurelio&Thaina Ribeiro
* Data da entrega do arquivo fonte:25/06/2024
*/

#include <stdio.h>
#include <string.h>

#define MAX_PALAVRAS 10
#define TAM_MAX 100

int main() {
    char palavra[TAM_MAX];
    char vetorX[MAX_PALAVRAS][TAM_MAX];
    char vetorR[MAX_PALAVRAS][TAM_MAX];
    int contadorX = 0, contadorR = 0;
    int descartadasX = 0, descartadasR = 0;
    int tamanhoTotalX = 0;
    int i; // Definindo a variável fora do loop

    char menorPalavra[TAM_MAX] = "";
    char maiorPalavraR[TAM_MAX] = "";

    printf("Ola por favor insira sua palavra ou digite fim para encerrar:\n");

    while (1) {
        printf("sua palavra: ");
        scanf("%s", palavra);

        if (strcmp(palavra, "fim") == 0) {
            break;
        }

        // Atualiza a menor palavra
        if (strlen(menorPalavra) == 0 || strlen(palavra) < strlen(menorPalavra)) {
            strcpy(menorPalavra, palavra);
        }

        // Processa palavras que iniciam com 'x'
        if (palavra[0] == 'x' || palavra[0] == 'X') {
            if (contadorX < MAX_PALAVRAS) {
                strcpy(vetorX[contadorX++], palavra);
                tamanhoTotalX += strlen(palavra);
            } else {
                descartadasX++;
            }
        }

        // Processa palavras que terminam com 'r'
        if (palavra[strlen(palavra) - 1] == 'r' || palavra[strlen(palavra) - 1] == 'R') {
            if (contadorR < MAX_PALAVRAS) {
                strcpy(vetorR[contadorR++], palavra);
                if (strlen(palavra) > strlen(maiorPalavraR)) {
                    strcpy(maiorPalavraR, palavra);
                }
            } else {
                descartadasR++;
            }
        }
    }

    // Imprime resultados
    printf("\nPalavras que comecam com 'x':\n");
    for (i = 0; i < contadorX; i++) {
        printf("%s\n", vetorX[i]);
    }

    printf("\nPalavras que terminam com 'r':\n");
    for (i = 0; i < contadorR; i++) {
        printf("%s\n", vetorR[i]);
    }

    printf("\nEsta foi a menor palavra digitada: %s\n", menorPalavra);
    printf("A maior palavra que termina com 'r' foi: %s\n", strlen(maiorPalavraR) > 0 ? maiorPalavraR : "Nenhuma palavra termina com 'r'.");

    if (contadorX > 0) {
        printf("Esta eh a media dos tamanhos das palavras que iniciam com 'x': %.2f\n", (float)tamanhoTotalX / contadorX);
    } else {
        printf("Nenhuma palavra inicia com 'x'.\n");
    }

    printf("Palavras descartadas que iniciavam com 'x': %d\n", descartadasX);
    printf("Palavras descartadas que terminavam com 'r': %d\n", descartadasR);

    return 0;
}


