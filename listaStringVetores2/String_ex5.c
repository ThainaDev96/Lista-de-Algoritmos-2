/*5) Ler um vetor que contenha os nomes de uma turma de 6 alunos. Calcular a média dos 
nomes dos 6 alunos e contar quantos alunos tem o seu nome acima desta média calculada. 
Escrever a média dos nomes da turma e o resultado da contagem.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char nomes[6][100];   // Vetor para armazenar até 6 nomes de até 99 caracteres cada
    int soma = 0, i, cont = 0;  // Variáveis para calcular soma, índice e contador
    int media = 0;  // Média dos tamanhos dos nomes
    char destaque[6][100];  // Vetor para armazenar nomes com tamanho acima da média
    int maior_tamanho = 0;  // Variável para armazenar o maior tamanho encontrado

    // Entrada dos nomes
    for (i = 0; i < 6; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", nomes[i]);  // Leitura de cada nome

        soma += strlen(nomes[i]);  // Calcula a soma dos tamanhos dos nomes

        // Encontra o maior tamanho de nome e armazena o primeiro encontrado com maior tamanho
        if (strlen(nomes[i]) > maior_tamanho) {
            maior_tamanho = strlen(nomes[i]);
            strcpy(destaque[0], nomes[i]);  // Copia o nome para destaque
        }
    }

    media = soma / 6;  // Calcula a média dos tamanhos dos nomes

    // Verifica quais nomes têm tamanho acima da média
    for (i = 0; i < 6; i++) {
        if (strlen(nomes[i]) > media) { //se todos os nomes estiverem acima da media calcula eu faço a atribuição
            strcpy(destaque[cont], nomes[i]);  // Armazena nome com tamanho acima da média . atribuição 
            cont++;  // Incrementa o contador de nomes com tamanho acima da média, e uso no for
        }
    }

    // Saída dos resultados
    printf("\nLista de nomes inseridos:\n");
    for (i = 0; i < 6; i++) {
        printf("%s\n", nomes[i]);  // Exibe todos os nomes lidos
    }

    printf("\nA media de tamanho dos nomes eh %d.\n", media);  // Exibe a média dos tamanhos dos nomes

    printf("Os nomes com maior tamanho sao:\n");
    for (i = 0; i < cont; i++) {
        printf("%s\n", destaque[i]);  // Exibe os nomes com tamanho acima da média
    }

}



