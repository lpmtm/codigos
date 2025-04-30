
//CABEÇALHO
	//*Autor: Caroline Lopes (matricula: 2412130073)
	//*Objetivo: Calcular a area de figuras
	//*Data: 02/04/2024
	
	
#include <stdio.h>
#include <stdlib.h>

int main(void){
	float retangulo = 1;
	float triangulo = 2;
	float circulo = 3;
	float figura_escolhida=0.0;
	
printf ("Selecione a figura geometrica que deseja medir, se retangulo, digite 1; se triangulo, digite 2; se circulo, digite 3: ");
    scanf ("%f", &figura_escolhida);
    
if (figura_escolhida == 1){
	float base = 0.0;
float altura = 0.0;
float area = 0.0;

printf ("insira a base: ");
   scanf ("%f", &base);
printf ("insira a altura: ");
    scanf ("%f", &altura);
    
area = base * altura;

printf ("\narea:	%.1lf", area);
   }

if (figura_escolhida == 2){
	float base = 0.0;
float altura = 0.0;
float area = 0.0;

printf ("insira a base: ");
   scanf ("%f", &base);
printf ("insira a altura: ");
    scanf ("%f", &altura);
    
area = (base * altura)/2;

printf ("\narea:	%.1lf", area);
  }
  
if (figura_escolhida == 3){
	float pi = 3.14;
float r = 0.0;
float area = 0.0;

printf ("insira o raio: ");
    scanf ("%f", &r);
    
area = (r * r) * pi;

printf ("\narea:	%.1lf", area);
  }
  
  return 0;
}

