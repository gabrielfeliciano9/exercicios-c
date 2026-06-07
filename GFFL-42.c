#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-42 -  Quantidade de n	Umeros ímpares digitados *");
	printf("\n***************************************************************");
	
	int n, i, impares;

   i  = 1;
   impares = 0;

     while (i <= 10) {
      printf("\nDigite um numero: ");
       scanf("%d", &n);
    
         if (n % 2 != 0)
          impares++;
    
    i++;
}

printf("Impares: %d", impares);
}
