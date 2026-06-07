#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-50- Numero positivo obrigatorio               *");
	printf("\n***************************************************************");
	
	 int numero;

    do {

        printf("\nDigite um numero positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Valor invalido! Tente novamente.\n");
        }

    } while (numero <= 0);

    printf("Numero aceito: %d\n", numero);

}
	
