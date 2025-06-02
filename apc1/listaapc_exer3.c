//Cabeçalho
  //Nome: Caroline Lopes Martins (matricula: 2412130073)
  //Objetivo: atividade 3
  //Data: 27/04/2024

#include <stdio.h>
#include <stdlib.h>
int main(void){

//variaveis
float m= 0;
float x= 0;
float n= 0;
float y = 0;

//mensagem para o usuario
printf ("digite o valor de m: ");
scanf ("%f", &m);

printf ("digite o valor de x: ");
scanf("%f", &x);

printf ("digite o valor de n: ");
scanf ("%f", &n);

//calculo
y = (m*x)+n;

//mostrar para o usuario
printf ("\ny, %1lf",y);

return 0;
}

