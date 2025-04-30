/*
*
CABEÇALHO
	Autor: Caroline Lopes (matricula: 2412130073)
	Objetivo: Calcular a area de um circulo
	Data: 02/04/2024
*
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
float pi = 3.14;
float r = 0.0;
float area = 0.0;

printf ("insira o raio");
    scanf ("%f", &r);
    
area = (r * r) * pi;

printf ("\narea:	%.1lf", area);
return 0;
}
