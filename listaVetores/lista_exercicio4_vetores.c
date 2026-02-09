/*4) Leia 4 números, coloque-os em um vetor e mostre-os na ordem inversa de sua leitura. */

#include <stdio.h>

int main(void) {
    int nro[4]; 
    int cont;

    for (cont = 0; cont < 4; cont++) { 
        printf("Informe o nro %d: ", cont + 1); 
        scanf("%d", &nro[cont]);
    }
    
    for (cont = 3; cont >= 0; cont--) {  
    	printf("Numeros em ordem inversa:%d ",nro[cont]);
    }
    
  
}

	
	
