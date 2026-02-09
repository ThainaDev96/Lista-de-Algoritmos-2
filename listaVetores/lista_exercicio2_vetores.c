/*2) Fazer um programa que leia um conjunto de 8 notas de alunos de uma disciplina, e as 
armazena na variável nota. Determinar a maior nota.*/

#include <stdio.h>
int main(void) {
    float notas[8];
    int cont;
    float maior_nota = 0;

    
    for (cont = 0; cont < 8; cont++) {
        printf("Informe a nota %d: ", cont + 1);
        scanf("%f", &notas[cont]);

        if (notas[cont] > maior_nota) {
            maior_nota = notas[cont]; //se for verdade , maior nota recebe a maior nota do contador
        }
    }

    for(cont=0; cont<8;cont++){
    printf("A maior nota eh: %.2f\n", maior_nota);
	}
	
}

