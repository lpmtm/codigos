//Cabeçalho
  //Nome: Caroline Lopes Martins (matricula: 2412130073)
  //Objetivo: atividade
  //Data: 30/04/2024

#include <stdio.h>
#include <stdlib.h>
int main(void){

int opcao = 0;
int opcao_1 = 1;
int opcao_2 = 2;
int candidato_1 = 3;
int canditado_2 = 4;
int canditado_3 = 5;
int canditado = 0;

do{

printf ("escolha numero 1 caso queira votar, escolha numero 2 caso queira encerrar: ");
scanf ("%d", &opcao);

if (opcao == 1){
printf ("\nvoce escolheu votar");

printf ("\nse voce deseja votar no canditado_1 digite 3, caso seja no canditado_2 digite 4, caso canditado_3 digite 5: ");  
scanf ("%d", &canditado);

switch (canditado){
case 3:
printf("votado com sucesso!");
break;
case 4:
printf ("votado com sucesso!");
break;

case 5:
printf ("votado com sucesso!");
break;
}


}
else if (opcao == 2);{
printf ("\nvoce escolheu encerrar");
break;
}

}
while (opcao != 2);
return 0;

}
