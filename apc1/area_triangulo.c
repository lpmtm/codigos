/*
*
CABEÇALHO
	Autor: Caroline Lopes (matricula: 2412130073)
	Objetivo: Calcular a area de um triangulo
	Data: 02/04/2024
*
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
float base = 0.0;
float altura = 0.0;
float area = 0.0;

printf ("insira a base");
   scanf ("%f", &base);
printf ("insira a altura");
    scanf ("%f", &altura);
    
area = (base * altura)/2;

printf ("\narea:	%.1lf", area);
return 0;
}
