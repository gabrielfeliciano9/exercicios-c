#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-43 -   Soma dos pares entre 1 e 100           *");
	printf("\n***************************************************************");
	
	int i, soma;

      i = 1;
      soma = 0;
 
       while (i <= 100) {
        if (i % 2 == 0)
         soma = soma + i;
    i++;
}

printf("\nSoma dos pares: %d", soma);
}
