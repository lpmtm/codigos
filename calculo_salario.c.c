//CABEÇALHO
	//Autor: Caroline Lopes Martins (matricula: 2412130073) 
	//Objetivo: Calcular o salario atual do professor
	//Data: 29/03/2024

#include <stdio.h>
#include <stdlib.h>

int main(void){


	// declaracao de variaveis
  int ano_inicial = 2015;
  int ano_atual = 2024; 
  float salario_atual = 0.00;

  // declaracao de constante
	const float PERC_REAJ = 5.0;
	const float BONUS_PERF = 2.0;
    const float SALARIO_INICIAL = 5000.00; 

	// ler variavel ano de inicio
	printf ("Digite seu ano de inicio:");
	scanf("%d", &ano_inicial);

	// ler salario inicial
	printf ("digite seu salario inicial:");
	scanf("%f", &SALARIO_INICIAL);

   // ler ano atual
   printf ("digite o ano atual:");
   scanf("%d", &ano_atual); 
   
   //calculo salario atual
     {
   for (; ano_inicial <= ano_atual; ano_inicial++)
     //aplicar bonus de 2% anual 
     salario_atual = (SALARIO_INICIAL * 12) + 2.0;
     
     //aplicar reajuste de 5%
     salario_atual = (salario_atual + 0.5);
               }

	// finaliza o programa
	printf ("salario atual em %d: R$ %.2f\n", ano_atual, salario_atual);
	return 0;
}

