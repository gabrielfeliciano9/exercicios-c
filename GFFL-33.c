#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-33 - Multiplos de 3 entre 1 e 30              *");
	printf("\n***************************************************************");
	
	 int n;
	 
	   for (n = 1; n <= 30; n++){
	   	 if (n % 3 == 0){
	   	 	printf("\nMultiplos de 3: %d\n", n);
			}
	   }
}
