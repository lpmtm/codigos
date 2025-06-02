//Cabeçalho
//Nome: Caroline Lopes Martins (matricula: 2412130073)
//Objetivo: 
//Data: 23/04/2024

#include <stdio.h>
#include <stdlib.h>
int main(void){

int i=0;
int numero=0;

	printf("digite um numero: ");
	scanf("%d", &numero);

	while (i<10){
		numero = numero + 1;

	if (numero % 2 == 0){
		printf ("\n%d",numero * 2);
		i=i+1;
	}else{
		printf ("\n%d",numero * 3);
		i=i+1;
		}
	}	

return 0;
}

