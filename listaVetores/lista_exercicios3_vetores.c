/*3) Ler uma variável de 10 elementos numéricos e verificar se existe elementos iguais a 30.
Se existirem, escrever as posições em que estão armazenadas. */


#include <stdio.h>

int main(void) {
    float nro[10];
    int cont;
    int encontrados = 0; 

    // Entrada de dados
    for (cont = 0; cont < 10; cont++) {
        printf("Informe o nro %d: ", cont+1);
        scanf("%f", &nro[cont]);
    }

    for (cont = 0; cont < 10; cont++) {
        if (nro[cont] == 30) {
            encontrados++; 
            printf("%d ", cont+1);
			}
        }
    
		for (cont = 0; cont < 10; cont++) {
	 	printf("Total de elementos iguais a 30 encontrados: %d\n", encontrados);
	}
}

      
