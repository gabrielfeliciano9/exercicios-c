#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-40 - Tabuada com while                         *");
	printf("\n***************************************************************");
	
	int n, i;
	
	i = 1;
	
	printf("\nDigite um numero: ");
	scanf("%d", &n);
	
	while (i <= 10) {
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}
}
