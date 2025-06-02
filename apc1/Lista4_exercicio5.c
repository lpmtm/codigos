//Cabeçalho
  //Nome: Caroline Lopes Martins (matricula: 2412130073)
  //Objetivo: programa que armazena seis numeros inteiros
  //Lista 4- exercicio 5
  //Data: 11/06/2024

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int vetor_a[6]= {1,0,5,-2,-5,7};
	int somavetores;
	int i;
	somavetores=vetor_a[0]+vetor_a[1]+vetor_a[5];
	printf("\n a soma dos seus vetores é: %d", somavetores);  
	vetor_a[3] = 100;
	for(i=0; i<6;i++){ 
	printf("\n%d", vetor_a[i]);
	}
	
	printf ("\ncaroline lopes 2412130073");
	return 0;
}

