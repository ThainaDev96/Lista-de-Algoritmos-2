/*6) Ler um vetor que contenha as notas de uma turma de 6 alunos. Calcular a média destes 
6 alunos e contar quantos alunos obteve nota acima desta média calculada. Escrever a 
média da turma e o resultado da contagem*/

#include <stdio.h>

int main(void) {
    float notas[6]; 
    int cont;
    float soma_notas = 0, media = 0;
    int acima_da_media = 0;

    for (cont = 0; cont < 6; cont++) { //entrada de dados
        printf("Informe a nota %d: ", cont + 1); 
        scanf("%f", &notas[cont]);
       
    }
    for (cont = 0; cont < 6; cont++) { //processamento
     soma_notas += notas[cont];
	}
    media = soma_notas / cont; //calculo 

    for (cont = 0; cont < 6; cont++) {//processamento
        if (notas[cont] > media) {
            acima_da_media++; 
        }
    }
	for (cont = 0; cont < 6; cont++) {//mostra os vetores
    printf("A media da turma eh: %.2f\n", media);
    printf("Alunos com nota acima da media: %d\n", acima_da_media);
	}
   
}

