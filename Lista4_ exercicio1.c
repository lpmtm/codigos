//Cabeçalho
  //Nome: Caroline Lopes Martins (matricula: 2412130073)
  //Objetivo: Um programa que lê e armazene 6 valores, e depois os motre na tela
  //Lista 4- exercicio 1 
  //Data: 11/06/2024
  
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num[6]; 
	int i; 
	for(i=0; i<6; i++){
		printf("digite seu valor: \n");
		scanf("%d", &num[i]);
		}
		printf("\n%d", num[0]);
		printf("\n%d", num[1]);
		printf("\n%d", num[2]);
		printf("\n%d", num[3]);
		printf("\n%d", num[4]);
		printf("\n%d", num[5]);
		printf ("\nCaroline Lopes 2412130073");
	return 0;
}

