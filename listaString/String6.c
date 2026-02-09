
/*6. Escreva um programa que preenche um vetor de 10 posições com palavras. Após a 
leitura informe qual é a menor palavra armazenada no vetor e qual o seu tamanho*/

#include <stdio.h>
#include <string.h>

int main() {
    char palavras[10][50];  // Vetor para armazenar até 10 palavras de até 49 caracteres cada (mais o caractere nulo)
    char menor_palavra[50]; // Array para armazenar a menor palavra encontrada
    int menor_tamanho = 50; // Inicializa com um tamanho grande qualquer para garantir que qualquer palavra será menor

    // Entrada de dados
    printf("Digite 10 palavras:\n");
    for (int i = 0; i < 10; i++) {
        printf("Palavra %d: ", i + 1);
        scanf("%s", palavras[i]);
    }

    // Encontrar a menor palavra
    for (int i = 0; i < 10; i++) {
        if (strcasecmp(palavras[i], menor_palavra) < 0 || i == 0) { // Verifica se a palavra atual é menor que a menor registrada
            strcpy(menor_palavra, palavras[i]); // Copia a palavra para a variável menor_palavra
            menor_tamanho = strlen(palavras[i]); // Atualiza o tamanho da menor palavra encontrado
        }
    }

    // Exibir resultado
    printf("\nA menor palavra armazenada: %s\n", menor_palavra);
    printf("Tamanho da menor palavra: %d\n", menor_tamanho);

    return 0;
}

