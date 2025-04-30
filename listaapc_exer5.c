//Cabeçalho
  //Nome: Caroline Lopes Martins (matricula: 2412130073)
  //Objetivo: bois
  //Data: 29/04/2024
    //Exercicio: 5
  
  #include <stdio.h>
#include <stdlib.h>
int main(void){
	int boi = 0;
	float receita = 0;
	int quantidade = 0;
	int preco = 0;
	int peso_boi = 0;
	int arroba = 232.60; 
	int i = 0;
	
	//calculo da receita
	receita = quantidade * preco;
	
	//solicitação de dados
	printf ("informe o peso do primeiro boi: ");
	scanf ("%d", &peso_boi);
	
		while (boi < 10){
			if (peso_boi >= 600.00){
				printf ("informe a quantidade que será disponível para o arroba: ");
				scanf ("%d", &quantidade);
				scanf ("&d", &arroba);
		
				receita = quantidade * arroba;
				scanf ("%d", &receita);
				printf ("\n%d", &receita  );
			}	
			else (peso_boi < 600.00);{
				printf ("\nboi com peso insuficiente!");
				break;
			}
	}
	
	
	
	
	
	return 0;
}
