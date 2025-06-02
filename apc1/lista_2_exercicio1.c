//cabecalho:
	//nome: caroline lopes martins (matricula: 2412130073)
	//lista 2- exercicio 1
	//objetivo: programa para ver se é possivel formar triangulos e classifica-los
	//data: 09/05/2024

#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int x = 0;
	int y = 0;
	int z = 0;
	int triangulos = 0;
	int area = 0; 
	
	printf ("\nescreva seu primeiro valor: ");
	scanf ("%d", &x);
	
	printf ("\nescreva seu segundo valor: ");
	scanf ("%d", &y);
	
	printf ("\nescreva seu terceiro valor: ");
	scanf ("%d", &z);
	
	if (x+y>z){
		printf ("\né possivel formar o triangulo!");
	}
	if (x+z>y){
		printf ("\né possivel formar o triangulo!");
	}
	if (y+z>x){
		printf ("\né possivel formar o triangulo!");
	}	
	
	if (x=y=z){ 
		printf ("\nseu triangulo é umm triangulo equilatero!");
	}else{
		printf ("\nseu triangulo é um triangulo escaleno!");
	}
		
	for (x=y; y=z; z=x);{
		printf ("\nseu triangulo é um triangulo isoceles!");
	}
	printf ("\nCaroline Lopes matric. 2412130073");
	return 0;
}
