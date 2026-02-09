/*8. Escreva um programa que leia 20 nomes e armazena-os em vetores de acordo com as 
seguintes regras:
a) palavras que iniciam pela letra b ou B, guardar no vetB;
b) palavras que iniciam pela letra d ou D, guardar no vetD;
c) palavras que iniciam pela letra f ou F, guardar no vetF;
d) palavras que iniciam pela legra k ou K, guardar no vetK.
A montagem dos vetores não deverá deixar espaços em branco entre as posições. Ao final 
da leitura exibir os 4 vetores.*/

#include <stdio.h>
#include <string.h>

int main() {
    char vetB[20][50];  // Vetor para palavras iniciadas com 'b' ou 'B'
    char vetD[20][50];  // Vetor para palavras iniciadas com 'd' ou 'D'
    char vetF[20][50];  // Vetor para palavras iniciadas com 'f' ou 'F'
    char vetK[20][50];  // Vetor para palavras iniciadas com 'k' ou 'K'
	int i;
    char palavra[50];   // Array para armazenar cada palavra digitada
    int contB = 0, contD = 0, contF = 0, contK = 0;  // Contadores para cada vetor

    printf("Digite 20 nomes:\n");

    for (int i = 0; i < 20; i++) {
        printf("> ");
        scanf("%s", palavra);

        // Verificar a inicial da palavra
        if (palavra[0] == 'b' || palavra[0] == 'B') {
            strcpy(vetB[contB], palavra);
            contB++;
        } else if (palavra[0] == 'd' || palavra[0] == 'D') {
            strcpy(vetD[contD], palavra);
            contD++;
        } else if (palavra[0] == 'f' || palavra[0] == 'F') {
            strcpy(vetF[contF], palavra);
            contF++;
        } else if (palavra[0] == 'k' || palavra[0] == 'K') {
            strcpy(vetK[contK], palavra);
            contK++;
        } else {
            printf("Palavra '%s' não corresponde a nenhum critério. Ignorada.\n", palavra);
        }
    }

    // Exibir os vetores preenchidos
    printf("\nNomes iniciados com 'b' ou 'B':\n");
    for (int i = 0; i < contB; i++) {
        printf("%s\n", vetB[i]);
    }

    printf("\nNomes iniciados com 'd' ou 'D':\n");
    for (int i = 0; i < contD; i++) {
        printf("%s\n", vetD[i]);
    }

    printf("\nNomes iniciados com 'f' ou 'F':\n");
    for (int i = 0; i < contF; i++) {
        printf("%s\n", vetF[i]);
    }

    printf("\nNomes iniciados com 'k' ou 'K':\n");
    for (int i = 0; i < contK; i++) {
        printf("%s\n", vetK[i]);
    }

    return 0;
}

