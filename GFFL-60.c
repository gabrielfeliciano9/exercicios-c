#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908        *");
	printf("\n* Programa GFFL-60 - O Validor de Dias Uteis               *");
	printf("\n***************************************************************");
	
	 int dia;

    printf("\nDigite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {

        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia Util. Acesso liberado para o trabalho.\n");
            break;

        case 1:
        case 7:
            printf("Fim de Semana. Predio fechado.\n");
            break;

        default:
            printf("Numero de dia invalido.\n");
    }
} 
