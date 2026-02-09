/*5) Criar um vetor de 10 elementos inteiros. A seguir criar outro vetor onde todos os
números negativos deverão ser trocados por 0 (zero). Escrever os dois vetores.*/

#include <stdio.h>
int main(void) {
    int nro[10]; 
    int cont;


    for (cont = 0; cont < 10; cont++) { 
        printf("Informe o nro inteiro %d: ", cont + 1); 
        scanf("%d", &nro[cont]);
    }
    
  
    for (cont = 0; cont < 10; cont++) {  
        if (nro[cont] < 0)
            nro[cont] = 0;
            
    }

    for (cont = 0; cont < 10; cont++) {  
        printf("Numero inteiros e os valores negativos trocados por zero: %d\n", nro[cont]);
    }
      printf("\n");
    
}

