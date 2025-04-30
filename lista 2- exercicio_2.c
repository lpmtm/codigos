//cabecalho:
	//nome: caroline lopes martins (matricula: 2412130073)
	//lista 2- exercicio 2
	//objetivo: operacoes basicas
	//data: 09/05/2024
	
	#include <stdio.h>
#include <stdlib.h>
int main(){
	
	float num1 = 0;
	float num2 = 0;
	char operacao = 0;
	char soma = 0;
	char menos = 0;
	char div = 0;
	char mult = 0;
	char resultado = 0;
	
	printf ("\nescolha a operacao que deseja: soma, subtracao, multiplicao ou divisao:  ");
	scanf ("%s", &operacao);
	
	printf ("\ndigite seu primeiro numero:  ");
	scanf ("%f", &num1);
	
	printf ("\ndigite seu segundo numero:  ");
	scanf ("%f", &num2);
	
	switch (operacao)
	{
		case 1: (operacao == soma);
			resultado = num1 + num2;
			break;
			
		case 2: (operacao == menos);
			resultado = num1 - num2 ;
			break;
			
		case 3: (operacao == div);
			resultado = num1/num2 ;
			break;
			
		case 4: (operacao == mult);
			resultado = num1 * num2;
			break;
	}
	
	printf ("\nresultado, %1lf", resultado);
	printf ("\nCaroline Lopes 2412130073");
	
	return 0;
}
	
