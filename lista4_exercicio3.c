//Cabeçalho
  //Nome: Caroline Lopes Martins (matricula: 2412130073)
  //Objetivo: Um programa que mostra a media dos valores lidos 
  //Lista 4- exercicio 3
  //Data: 11/06/2024
  
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num[5];
	int i;
	int soma; 
	int med;
	for(i=0; i<5; i++){
		printf("\nescreva um valor:  ");
		scanf("%d", &num[i]);
	}
	soma = num[0]+num[1]+num[2]+num[3]+num[4];
	med = soma/5;  
		printf("\na soma e: %d",soma); 
		printf("\na media e: %d", med);
		printf ("\nCaroline Lopes 2412130073");
	return 0;
}

