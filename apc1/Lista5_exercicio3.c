//Cabeçalho
  //Nome: Caroline Lopes Martins (matricula: 2412130073)
  //Objetivo: programa que lê uma string e imprima ela de tras para frente
  //Lista 5- exercicio 3
  //Data: 11/06/2024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str[15];
    int i;
	int j; 
	
    printf("escreva uma palavra de no maximo 14 caracteres: ");
    fgets(str, sizeof(str), stdin); 
    
	size_t len = strlen(str);
	
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
	
	j=strlen(str); 
    printf("String invertida: ");
    for (i = j - 1; i >= 0; i--) {
        printf("%s", &str[i]);
    }
	printf("\n");
	
	printf ("\ncaroline lopes 2412130073");

return 0;
}

