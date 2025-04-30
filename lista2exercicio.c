//Cabeçalho
  //Nome: roCaline Lopes Martins (matricula: 2412130073)
  //Objetivo:
  //Data: 13/05/2024

#include <stdio.h>
#include <stdlib.h>
int main(void){
	
	float numero1 = 0;
	float numero2 = 0;
	int soma = 1;
	int multip = 2;
	int div = 3;
	int subt = 4;
	int operacao_escolha = 0;
	int resultado = 0;
	
	do{
		printf ("\ndigite seu primeiro numero:  ");
		scanf ("%f", &numero1);
	
		printf ("digite seu segundo numero:  ");
		scanf ("%f", &numero2);
	
		printf ("escolha a operacao que voce deseja: 1 para somar, 2 para multiplicar, 3 para dividir, e 4 para subtrair:  ");
		scanf ("%d", &operacao_escolha);
		
		switch(operacao_escolha){
			case 1: 
				operacao_escolha == 1;
				resultado = numero1 + numero2;
				printf ("%d \n o resultado e: ", resultado);
				printf ("\n a operacao escolhida foi soma");
				break;
			
			case 2:
				operacao_escolha == 2;
				resultado = numero1 * numero2;
				printf ("%d \n o resultado e: ", resultado);
				printf ("\n a operacao escolhida foi soma");
				break;		
				
			case 3:
				operacao_escolha == 3;
				resultado = numero1/numero2;	
				printf ("%d \n o resultado e: ", resultado);
				printf ("\n a operacao escolhida foi soma");
				break;
				
			case 4:
			operacao_escolha == 4;
			resultado = numero1 - numero2;		
				printf ("%d \n o resultado e: ", resultado);
				printf ("\n a operacao escolhida foi soma");
				break;
			}
	}
	 while (operacao_escolha != 0);
	 return 0; 
}
