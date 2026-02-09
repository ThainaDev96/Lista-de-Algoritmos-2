/*5. Elaborar um programa que leia uma frase e informe, quantas palavras da frase iniciam 
com a letra c.*/

#include <stdio.h>
#include <string.h>

int main() {
    char frase[1000]; // Array para armazenar a frase digitada pelo usuário
    char palavra[100]; // Array para armazenar cada palavra extraída da frase
    int i, j;
    int contagem_c = 0; // Contador de palavras que começam com 'c'

    // Entrada da frase
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); // Usamos fgets para permitir a leitura de espaços em branco

    // Remover o caractere de nova linha (\n) inserido pelo fgets, se presente
    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }

    // Verificar cada palavra na frase
    for (i = 0; i <= strlen(frase); i++) {
        // Se encontrar um espaço ou final da string, processa a palavra encontrada
        if (frase[i] == ' ' || frase[i] == '\0') {
            // Copia a palavra encontrada para o array 'palavra'
            strncpy(palavra, frase, i);
            palavra[i] = '\0'; // Adiciona o terminador nulo no final da palavra

            // Verifica se a palavra começa com 'c' ou 'C'
            if (strcasecmp(palavra, "c") == 0) {
                contagem_c++;
            }

            // Move o início da próxima palavra após o espaço
            strcpy(frase, frase + i + 1);
            i = 0; // Reinicia o contador para verificar a próxima palavra
        }
    }

    // Exibir o resultado
    printf("Quantidade de palavras que iniciam com 'c' ou 'C': %d\n", contagem_c);

    return 0;
}

