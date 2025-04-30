//Cabeçalho: 
  //Autor: Caroline Lopes (matricula: 2412130073)
  //Objetivo: Calcular media intermediaria e final
  // Data: 08/04/2024
  
  #include <stdio.h>
#include <stdlib.h>
int main(void) {
	float AAs_1 = 0.0;
	float p1 = 0.0;
	float AAs_2 = 0.0;
	float p2 = 0.0;
	float nota_intermediaria = 0.0;
	float nota_intermediaria_2 = 0.0;
	float media_final = 0.0;
	
//Calculo media intermediaria
printf ("insira sua nota de atividades do primeiro bimestre");
    scanf ("%f", &AAs_1);
printf ("insira sua nota da P1");
    scanf ("%f", &p1);

nota_intermediaria = AAs_1 + p1;

printf ("\nnota_intermediaria:  %.1lf", nota_intermediaria);

//calculo media final
printf ("insira sua nota de atividades do segundo bimestre");
    scanf ("%f", &AAs_2);
printf ("insira sua nota da P2");
    scanf ("%f", &p2);

nota_intermediaria_2 = AAs_2 + p2;

//calculo nota final
media_final = (nota_intermediaria * 0,4) + (nota_intermediaria_2 * 0,6);
 
 printf ("\nmedia_final:  %.1lf", media_final);
 
 return 0;
}
 


