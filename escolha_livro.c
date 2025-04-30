//Cabeçalho
  //Nome: Caroline Lopes Martins (matricula: 2412130073)
  //Objetivo: auxiliar o emprestimo de livros
  //Data: 16/04/2024

#include <stdio.h>
#include <stdlib.h>
int main(void){
//declaração de variaveis
int cod_livro1=1;
    int cod_livro2=2;
    int cod_livro3=3;
    int cod_livro1_desejado=0;
    int cod_livro2_desejado=0;
    int cod_livro3_desejado=0;
    int cod_livro_desejado;
    //mensagem
      printf(" >>digite o codigo do livro escolhido: ");
         scanf("%d", &cod_livro1_desejado);
             if(cod_livro1_desejado == 1){
                 printf(" >>o livro existe");
                 printf(" >>pegue o livro");
    }
    //mensagem livro 2
	  printf(" >>digite o codigo do livro escolhido: ");
         scanf("%d", &cod_livro2_desejado);
             if (cod_livro2_desejado == 2){
                 printf(" >>o livro existe");
                 printf(" >>pegue o livro");
    }
    //mensagem livro 3 
    printf(" >>digite o codigo do livro escolhido: ");
         scanf("%d", &cod_livro3_desejado);
             if (cod_livro3_desejado == 3){
                 printf(" >>o livro existe");
                 printf(" >>pegue o livro");
    }
    //se não existe 
    printf(" >>digite o codigo do livro escolhido: ");
         scanf("%d", &cod_livro_desejado);
           if (cod_livro_desejado != 1);{
                 printf(" >>o livro nao existe");
    }
    printf(" >>digite o codigo do livro escolhido: ");
         scanf("%d", &cod_livro_desejado);
           if (cod_livro_desejado!=2);{
                 printf(" >>o livro nao existe");
    }
     printf(" >>digite o codigo do livro escolhido: ");
         scanf("%d", &cod_livro_desejado);
           if (cod_livro_desejado!=3);{
                 printf(" >>o livro nao existe");
	}
     return 0;
}
