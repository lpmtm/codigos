//Cabeçalho
  //Nome: Caroline Lopes Martins (matricula: 2412130073)
  //Lista 1- exercicio 3
  //Objetivo: calcular o valor de y
  //Data: 28/04/2024

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float m = 0;
	float x = 0;
	float n = 0;
	int y = 0;
	
	printf ("Digite sua variavel m: ");
	scanf ("%f", &m); 
	printf ("Digite sua variavel x: ");
	scanf ("%f", &x);
	printf ("Digite sua variavel n: ");
	scanf ("%f", &n);
	
	y= (m*x) + n ;
	printf ("o valor de y e %2d.\n", y);
	
	printf ("\nCaroline Lopes Martins, matricula: 2412130073");
	return 0;
} 
