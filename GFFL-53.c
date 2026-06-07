#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-53 - Confirmar saida com 's'                  *");
	printf("\n***************************************************************");
	
	  char sair;

    do {

        printf("\n===== MENU =====\n");
        printf("1 - Mensagem\n");
        printf("2 - Mensagem 2\n");

        printf("Deseja sair? (s para sair): ");
        scanf(" %c", &sair);

    } while (sair != 's');

    printf("Programa encerrado.\n");

}
