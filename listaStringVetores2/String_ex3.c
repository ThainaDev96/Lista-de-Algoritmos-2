/*3) Ler um vetor de 10 posições que contém nomes. Criar outro vetor, que contém as
palavras que NÃO iniciam por uma determinada letra que o usuário também deverá
informar. No final do processo, exibir os vetores.
Obs.: Nenhum dos vetores deverá possuir espaço em branco, entre as posições ocupadas*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char nomes[10][255]; // Vetor para armazenar até 10 nomes de até 254 caracteres cada
    char letra; // Variável para armazenar a letra fornecida pelo usuário
    char palavras[10][255]; // Vetor para armazenar as palavras que não começam com a letra especificada
    int i; // Variável de controle para os loops
    int cont = 0; // Contador para o número de palavras que não começam com a letra especificada

    // Entrada da letra fornecida pelo usuário
    printf("Digite a letra: ");
    scanf(" %c", &letra); // Lê a letra e armazena em 'letra'

    // Loop para ler os nomes e verificar se começam com a letra especificada
    for (i = 0; i < 10; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf(" %s", nomes[i]); // Lê o nome e armazena em nomes[i]

        // Verifica se o nome não começa com a letra especificada
        if (nomes[i][0] != letra) {    //se for diferente da letra escolhida ele faz a atribuição com a função strcpy
            strcpy(palavras[cont], nomes[i]); // Copia o nome para palavras
            cont++; // Incrementa o contador de palavras que não começam com a letra especificada
        }
    }

    // Exibe os nomes lidos no vetor nomes
    printf("\nNomes lidos:\n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", nomes[i]);
    }

    // Exibe os nomes que não começam com a letra especificada
    printf("\nNomes que nao iniciam com '%c':\n", letra);
    for (i = 0; i < cont; i++) {
        printf("%s\n", palavras[i]);
    }

   
}

