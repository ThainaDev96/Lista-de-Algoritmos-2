/*1. Ler diversas palavras e determinar:
? Qual a palavra mais comprida e qual é esse comprimento,
? O comprimento médio de todas as palavras lidas,
? Quantas palavras iniciam pela letra a ou A.
Usar a palavra fim para indicar o fim da entrada de dados (flag), sendo que ela não entra 
nos cálculos.*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[50]; // Vetor para armazenar cada palavra lida
    char maior_palavra[50]; // Para armazenar a maior palavra encontrada
    int tamanho_maior = 0; // Comprimento da maior palavra
    int total_caracteres = 0; // Total de caracteres de todas as palavras
    int numero_palavras = 0; // Contador de palavras
    int contador_a = 0; // Contador de palavras que contêm 'a' ou 'A'

    // Entrada de dados
    printf("Digite uma palavra ou 'fim' para encerrar: ");
    scanf("%s", palavra);

    while (strcasecmp(palavra, "fim") != 0) { // Enquanto a palavra lida não for "fim"
        int comprimento = strlen(palavra); // Comprimento da palavra lida
        total_caracteres += comprimento; // Adiciona ao total de caracteres
        numero_palavras++; // Incrementa o contador de palavras

        // Verifica se é a palavra mais longa encontrada até agora
        if (comprimento > tamanho_maior) {
            tamanho_maior = comprimento;
            strcpy(maior_palavra, palavra); // Copia a palavra para maior_palavra
        }

        // Verifica se a palavra contém 'a' ou 'A'
        int tem_a = 0;
        for (int i = 0; i < comprimento; i++) {
            if (palavra[i] == 'a' || palavra[i] == 'A') {
                tem_a = 1;
                break;
            }
        }

        if (tem_a) {
            contador_a++;
        }

        // Próxima palavra
        printf("Digite uma palavra ou 'fim' para encerrar: ");
        scanf("%s", palavra);
    }

    // Calcula o comprimento médio das palavras
    double comprimento_medio = (double) total_caracteres / numero_palavras;

    // Saída dos resultados
    printf("\nResultados:\n");
    printf("1. A maior palavra encontrada foi '%s' com %d caracteres.\n", maior_palavra, tamanho_maior);
    printf("2. O comprimento médio das palavras lidas é %.2lf caracteres.\n", comprimento_medio);
    printf("3. Foram encontradas %d palavras que contêm 'a' ou 'A'.\n", contador_a);

    return 0;
}


