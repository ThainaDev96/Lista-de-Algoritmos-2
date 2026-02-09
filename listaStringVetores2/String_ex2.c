/*2) Escreva um programa que preenche um vetor de 10 posições com palavras. Após a
leitura informe qual é a maior palavra armazenada no vetor e qual o seu tamanho.
*/
#include<stdio.h>
#include<string.h> // Inclui a biblioteca para usar funções de manipulação de strings

int main(void){
    char vetor[10][255]; // Declara um vetor de 10 strings com no máximo 254 caracteres cada (mais 1 para o caractere nulo '\0')
    int i;
    char maior_palavra[255]; // Variável para armazenar a maior palavra encontrada

    // Entrada de dados: preenche o vetor com 10 palavras fornecidas pelo usuário
    for(i = 0; i < 10; i++) {
        printf("Digite a palavra: ");
        gets(vetor[i]); // Lê uma palavra e armazena na posição i do vetor
    }

    // Inicializa a maior_palavra com a primeira palavra do vetor
    strcpy(maior_palavra , vetor[0]);

    // Processamento: encontra a maior palavra no vetor
    for(i = 1; i < 10; i++) {
        if(strlen(vetor[i]) > strlen(maior_palavra)) {
            strcpy(maior_palavra , vetor[i]); // Copia a palavra para maior_palavra se ela for maior que a atualmente armazenada
        }
    }

    // Saída de resultados: exibe a maior palavra e seu tamanho
    printf("A maior palavra armazenada: %s e o tamanho dela eh %d\n", maior_palavra, strlen(maior_palavra));

 
}

