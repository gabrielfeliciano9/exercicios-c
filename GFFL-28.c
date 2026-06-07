#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908       *");
	printf("\n* Programa GFFL-28 -  Soma dos 100 primeiros números naturais *");
	printf("\n***************************************************************");
	
	int i, soma;
	
	soma = 0;
	
	 for (i = 1; i <= 100; i++) {
	 soma = soma + i;
	 }
	 
	printf("\nSoma: %d", soma);
}  
