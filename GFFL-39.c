#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-39 - Verificar se um número é positivo        *");
	printf("\n***************************************************************");
	
	int n;
	
	n = 0;
	
	while (n <= 0) {
		printf("\nInforme um numero: ");
		scanf("%d", &n);
		
		if (n <= 0){
			printf("Numero Invalido");
		}
	}
	 printf("Numero valido: %d", n);
}
