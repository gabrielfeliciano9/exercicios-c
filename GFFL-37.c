#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-37 -  Soma de numeros ate digitar zero        *");
	printf("\n***************************************************************");
	
	int n, soma;
	
	soma = 0;
	
	 printf("\nDigite um numero (0 para sair): ");
	 scanf("%d", &n);

      while (n != 0) {
      	  soma = soma + n;
          printf("Digite um numero (0 para sair): ");
          scanf("%d", &n);
      }
      
      printf("Soma total: %d", soma);
} 
