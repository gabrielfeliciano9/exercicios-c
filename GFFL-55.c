#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908                     *");
	printf("\n* Programa GFFL-55 -Ler números e mostrar o maior (até digitar negativo)*");
	printf("\n***************************************************************");
	
	 int numero, maior;
	 
	 maior = 0;
	 
	 do {

        printf("\nDigite um numero: ");
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

    } while (numero >= 0);

    printf("Maior numero informado: %d\n", maior);
}  
