//Cabeçalho
  //Nome: Caroline Lopes Martins (matricula: 2412130073)
  //Lista 1- exercicio 2
  //Objetivo: receber numeros ate que 5 deles sejam impares
  //Data: 28/04/2024

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int valor_impar = 0;
	int valor_par = 0;
	int numero = 0;
	
	printf ("digite seu primeiro numero: ");
	scanf ("%d", numero);
	
	while (numero/2 == 0){
	
		printf ("digite um numero impar: ");
		scanf ("%d", numero);
			if (numero/2 != 0);
				{
				printf ("numero impar, ok! ");
				}
	}
	return 0;
}
