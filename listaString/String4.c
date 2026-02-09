/*4. A matrícula dos alunos da Faculdade Dom Bosco de Porto é formada pelas seguintes 
informações: os quatro (04) primeiros caracteres indicam o ano em que o aluno se 
matriculou na Faculdade; o próximo caractere indica o semestre (1 – para o primeiro; 2 –
para o segundo); o próximo caractere indica o curso ( 1 – ADM; 2 – CON; 3 – SIS; 4 –
ENG; 5 – DIR) e os próximos seis (06) são números aleatórios que formam identificadores 
únicos (esta informação não é relevante para a solução do problema). Escrever um 
programa que leia um número indeterminado de matrículas e ao final da leitura mostre as 
seguintes informações:
a. total geral de alunos lidos;
b. total de alunos para cada curso;
c. percentual de alunos do curso de ADM;
d. total de alunos matriculados por semestre;
e. percentual de alunos dos cursos de SIS e ENG, sobre o total de alunos lidos.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char matricula[11]; // Array para armazenar a matrícula de cada aluno
    int total_alunos = 0; // Contador total de alunos lidos
    int total_ADM = 0, total_CON = 0, total_SIS = 0, total_ENG = 0, total_DIR = 0; // Contadores por curso
    int total_semestre_1 = 0, total_semestre_2 = 0; // Contadores por semestre
    int total_SIS_ENG = 0; // Contador para cursos SIS e ENG
    float percentual_ADM = 0.0; // Percentual de alunos do curso de ADM
    float percentual_SIS_ENG = 0.0; // Percentual de alunos dos cursos SIS e ENG

    // Leitura das matrículas até digitar 'fim'
    printf("Digite as matriculas dos alunos ou 'fim' para encerrar:\n");
    scanf("%s", matricula);

    while (strcasecmp(matricula, "fim") != 0) {
        total_alunos++; // Incrementa o total de alunos lidos

        // Extrai as informações da matrícula
        char ano[5];
        strncpy(ano, matricula, 4); // Copia os 4 primeiros caracteres para ano
        ano[4] = '\0'; // Adiciona o caractere nulo para finalizar a string

        char semestre[2];
        strncpy(semestre, matricula + 4, 1); // Copia o caractere do semestre
        semestre[1] = '\0'; // Adiciona o caractere nulo para finalizar a string

        char curso[2];
        strncpy(curso, matricula + 5, 1); // Copia o caractere do curso
        curso[1] = '\0'; // Adiciona o caractere nulo para finalizar a string

        // Contabiliza o curso
        if (strcasecmp(curso, "1") == 0) {
            total_ADM++;
        } else if (strcasecmp(curso, "2") == 0) {
            total_CON++;
        } else if (strcasecmp(curso, "3") == 0) {
            total_SIS++;
            if (strcasecmp(semestre, "1") == 0 || strcasecmp(semestre, "2") == 0) {
                total_SIS_ENG++;
            }
        } else if (strcasecmp(curso, "4") == 0) {
            total_ENG++;
            if (strcasecmp(semestre, "1") == 0 || strcasecmp(semestre, "2") == 0) {
                total_SIS_ENG++;
            }
        } else if (strcasecmp(curso, "5") == 0) {
            total_DIR++;
        }

        // Contabiliza o semestre
        if (strcasecmp(semestre, "1") == 0) {
            total_semestre_1++;
        } else if (strcasecmp(semestre, "2") == 0) {
            total_semestre_2++;
        }

        // Leitura da próxima matrícula
        printf("Digite a matricula do proximo aluno ou 'fim' para encerrar:\n");
        scanf("%s", matricula);
    }

    // Cálculo dos percentuais
    if (total_alunos > 0) {
        percentual_ADM = (float)total_ADM / total_alunos * 100.0;
        percentual_SIS_ENG = (float)total_SIS_ENG / total_alunos * 100.0;
    }

    // Exibição dos resultados
    printf("\nResultados:\n");
    printf("a. Total geral de alunos lidos: %d\n", total_alunos);
    printf("b. Total de alunos por curso:\n");
    printf("   - ADM: %d\n", total_ADM);
    printf("   - CON: %d\n", total_CON);
    printf("   - SIS: %d\n", total_SIS);
    printf("   - ENG: %d\n", total_ENG);
    printf("   - DIR: %d\n", total_DIR);
    printf("c. Percentual de alunos do curso de ADM: %.2f%%\n", percentual_ADM);
    printf("d. Total de alunos matriculados por semestre:\n");
    printf("   - Semestre 1: %d\n", total_semestre_1);
    printf("   - Semestre 2: %d\n", total_semestre_2);
    printf("e. Percentual de alunos dos cursos de SIS e ENG sobre o total de alunos lidos: %.2f%%\n", percentual_SIS_ENG);

    return 0;
}

