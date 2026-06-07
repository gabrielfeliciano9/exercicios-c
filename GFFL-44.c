#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-44 - Contar digitos de um numero              *");
	printf("\n***************************************************************");
	
	int numero, quantidadedigitos = 0;

     
    printf("\nDigite um numero: ");
    scanf("%d", &numero);

     while (numero != 0) {
        quantidadedigitos++;
        numero = numero / 10;
    }

     if (quantidadedigitos == 0) {
        quantidadedigitos = 1;
    }

    printf("Quantidade de digitos: %d\n", quantidadedigitos);
}
