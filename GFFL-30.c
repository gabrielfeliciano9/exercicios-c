#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908       *");
	printf("\n* Programa GFFL-30 - Fatorial de um número                    *");
	printf("\n***************************************************************");
	
	 int n, i, x;
	 
	  x = 1;
	  
	  printf("\nDigite um numero: ");
      scanf("%d", &n);
       
       for (i = 1; i <= n; i++) {
       	x = x * i;
     }
     
      printf("Fatorial de %d: %d", n,x);
      
}
	  
	
	
