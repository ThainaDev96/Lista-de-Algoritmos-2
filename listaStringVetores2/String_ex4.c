/*4) Ler uma variável de 10 posições que contém nomes e verificar se existe nomes iguais a
ALGORITMOS. Se existirem, escrever as posições em que estão armazenadas. */

#include <stdio.h>
#include <strings.h>

int main(void) {
    char nomes[10][255]; // Vetor para armazenar até 10 nomes, cada um com até 254 caracteres
    int i;
    int encontrados = 0;  // Variável para contar quantos nomes "ALGORITMOS" foram encontrados

    // Entrada de dados
    for (i = 0; i < 10; i++) {
        printf("Digite o nome %d: ", i+1);
        scanf(" %s", nomes[i]); // Lê o nome digitado pelo usuário e armazena em nomes[i]
    }

    // Verifica se há nomes iguais a "ALGORITMOS" e exibe suas posições
    printf("Posicoes dos nomes iguais a \"ALGORITMOS\":\n");
    for (i = 0; i < 10; i++) {
        if (strcasecmp(nomes[i], "ALGORITMOS") == 0) {  //verifica se o conteúdo da string nomes[i] é igual a "ALGORITMOS", independentemente de estar em maiúsculas ou minúsculas.
            printf("Posicao %d: %s\n", i, nomes[i]); // Imprime a posição e o nome encontrado
            encontrados++; // Incrementa o contador de nomes "ALGORITMOS" encontrados
        }
    }

    // Se nenhum nome "ALGORITMOS" foi encontrado
    if (encontrados == 0) {
        printf("Nenhum nome igual a \"ALGORITMOS\" encontrado.\n");
    }

}


