#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-52 - Soma ate o numero ser multiplo de 10     *");
	printf("\n***************************************************************");
	
	int n, soma;
	
	soma = 0;
	
	 do {

        printf("\nDigite um numero: ");
        scanf("%d", &n);

        soma = soma + n;

    } while (n % 10 != 0);

    printf("Soma total: %d\n", soma);
}

