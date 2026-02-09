/*Questão 1: Dada uma matriz 60 X 60 que armazena números inteiros. Escreva um programa que leia os valores para a matriz e:
A)Calcule e mostre a média dos números ímpares armazenados na primeira coluna;
B)Calcule e mostre a quantidade de números pares que estão armazenados nas linhas ímpares da matriz
C)Guarde em um vetor e depois mostre, os números múltiplos de 5 que estão armazenados na matriz.
D)Caucule e mostre a média dos números armazenados no vetor.
*/


#include <stdio.h>
int main(void) {
    int matriz[60][60];
    int i, j;
    float somaColuna = 0;
    int contImpares = 0;
    float mediaImpares = 0;
    
    int quant_n_pares=0;
   
     
    int cont;
    
    float somaTotal= 0 ;
    float mediaTotal = 0 ; 
    int contMtotal = 0;
    
    
    // Entrada de dados
    for (i = 0; i < 60; i++) {
        for (j = 0; j < 60; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // A) Cálculo da média dos elementos impares da primeira coluna
     //Soma dos elementos da primeira coluna
    for(i = 0; i < 60; i++) { //acessar coluna utiliza loop linha
        somaColuna += matriz[i][0]; //acessa coluna 0 da linha i, para somar todos os elementos da primeira coluna. 
    		if (matriz[i][0] % 2 == 1) {  
                contImpares++;
            }
        }
        
        mediaImpares =(float) somaColuna / contImpares; // Média da primeira coluna dividida pelo número total de numero impares
        
       
       
    //B)Calculo da quantidade de números pares que estão armazenados nas linhas ímpares da matriz
  
        for (j = 0; j < 60; j++) {//acessa linha utilizando loop coluna
   			if (matriz[i][j] % 2 == 0) { 
                quant_n_pares++;
            }
        }
    
   	
   	//C)Guarde em um vetor e depois mostre, os números múltiplos de 5 que estão armazenados na diagonal da matriz.
   	for (i = 0; i < 60; i++) {
        for (j = 0; j < 60; j++) {
            if (i == j) {
   				if (matriz[i][j] % 5 != 0){
			   		cont++;	
					   	
            }
        }
    }
    
    //D)Calcule e mostre a média dos números armazenados no vetor.
    for(i = 0; i < 60; i++) {
        for(j = 0; j < 60; j++) {
            somaTotal += matriz[i][j];
                contMtotal++;
            }
        }
          mediaTotal = (float)somaTotal / contMtotal;
        
        
                
                
    printf("\nMatriz digitada:\n");
    	for(i = 0; i < 60; i++) {
        	for(j = 0; j < 60; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }        
    printf("Media dos numeros impares eh %.2f\n", i + 1, mediaImpares); 
    printf("\nQuantidade de elementos Impares na matriz: %d\n", contImpares);
	printf("\nQuantidade de elementos Pares armazenados nas linhas impares: %d\n", quant_n_pares); 
    printf("\nNumeros multiplos de 5 na matriz: %d\n", cont);  
    printf("A media dos numeros armazenados no vetor eh %.2f\n", i + 1, mediaTotal);      
                
                
                
}
}




