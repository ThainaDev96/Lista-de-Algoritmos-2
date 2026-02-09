/*6) Escrever um programa para preencher um vetor de palavras de 15 posições. Deverão ser 
lidas diversas palavras, mas somente serão guardadas no vetor as palavras que tenham 
alguma vogal. O programa encerra quando o vetor estiver totalmente preenchido*/

#include <stdio.h>
#include <string.h> // Biblioteca para usar funções de manipulação de strings

int main(void) {
    char palavras[15][255]; // Vetor para armazenar até 15 palavras de até 254 caracteres cada
    int cont = 0; // Contador de palavras válidas (com pelo menos uma vogal)
    int vogal_presente; // Flag para indicar se a palavra contém alguma vogal

    // Loop para ler e armazenar palavras até preencher o vetor ou atender a condição de saída
    for (int i = 0; i < 15; i++) {
        printf("Digite uma palavra (ou 'fim' para encerrar): ");
        scanf("%s", palavras[cont]);

        if (strcmp(palavras[cont], "fim") == 0) { // Condição para encerrar a leitura
            break;
        }

        vogal_presente = 0; // Inicializa a flag para cada nova palavra digitada
        for (int j = 0; j < strlen(palavras[cont]); j++) {  //variavel esta declarada dentro do for (endereço de memória do caractere na posição j dentro da palavra armazenada em palavras[cont]
            if (strcasecmp(&palavras[cont][j], "a") == 0 ||
                strcasecmp(&palavras[cont][j], "e") == 0 ||
                strcasecmp(&palavras[cont][j], "i") == 0 ||
                strcasecmp(&palavras[cont][j], "o") == 0 ||
                strcasecmp(&palavras[cont][j], "u") == 0) {
                vogal_presente = 1; // Se encontrar vogal, marca a flag como verdadeira
                break; // Pode parar a verificação assim que encontrar uma vogal
            }
        }

        if (vogal_presente) {
            cont++; // Incrementa o contador apenas se a palavra tiver vogal
        }
    }

    // Saída das palavras que contêm pelo menos uma vogal
    printf("\nPalavras com pelo menos uma vogal:\n");
    for (int i = 0; i < cont; i++) { // Itera até o número de palavras válidas (cont)
        printf("%s\n", palavras[i]);
    }

}

