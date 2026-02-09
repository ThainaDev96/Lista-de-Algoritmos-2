/*7) Ler uma matriz 3X3 com palavras e escrever:
a) a palavra que possui o maior número de caracteres da matriz;
b) quantas palavras iniciam com a letra ‘a’ na primeira linha da matriz;
c) a menor palavra armazenada na diagonal principal da matriz*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char matriz[3][3][255]; // Matriz 3x3 para armazenar palavras de até 254 caracteres cada
    int i, j; // Variáveis de loop
    int maior_caracteres = 0; // Variável para armazenar o maior número de caracteres
    char palavra_maior[255]; // Armazenar a palavra com maior número de caracteres
    int cont_a_primeira_linha = 0; // Contador de palavras que começam com 'a' na primeira linha
    char menor_palavra_diagonal[255]; // Armazenar a menor palavra na diagonal principal
    int menor_comprimento = 255; // Inicializa o menor comprimento com um valor grande
    
    // Entrada de dados
    printf("Digite as palavras para a matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%s", matriz[i][j]);
        }
    }

    // a) Encontrar a palavra com o maior número de caracteres
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            int comprimento = strlen(matriz[i][j]);
            
            if (comprimento > maior_caracteres) {
                maior_caracteres = comprimento;
                strcpy(palavra_maior, matriz[i][j]); // Copia a palavra para palavra_maior
            }
        }
    }
    printf("a) A palavra com o maior número de caracteres: %s\n", palavra_maior);

    // b) Contar quantas palavras que iniciam com 'a' na primeira linha
    for (j = 0; j < 3; j++) {
        if (strcasecmp(&matriz[0][j][0], "a") == 0) { // Verifica se a primeira letra é 'a'
            cont_a_primeira_linha++;
        }
    }
    printf("b) Quantidade de palavras que iniciam com 'a' na primeira linha: %d\n", cont_a_primeira_linha);

    // c) Encontrar a menor palavra armazenada na diagonal principal
    for (i = 0; i < 3; i++) {
        int comprimento_diagonal = strlen(matriz[i][i]); // Comprimento da palavra na diagonal principal
        
        if (comprimento_diagonal < menor_comprimento) {
            menor_comprimento = comprimento_diagonal;
            strcpy(menor_palavra_diagonal, matriz[i][i]); // Copia a palavra para menor_palavra_diagonal
        }
    }
    printf("c) A menor palavra na diagonal principal: %s\n", menor_palavra_diagonal);

}

