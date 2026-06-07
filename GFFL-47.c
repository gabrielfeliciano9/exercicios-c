#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-47 - Tabuada de um numero                     *");
	printf("\n***************************************************************");
	
	int n, i = 1;

     printf("\nDigite um numero: ");
      scanf("%d", &n);

       do {
         printf("%d x %d = %d\n", n, i, n * i);
     i++;
  } while (i <= 10);  
}
