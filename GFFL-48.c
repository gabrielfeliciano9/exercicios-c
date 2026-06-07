#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-48- Menu com opcao de sair                    *");
	printf("\n***************************************************************");
	
	int opcao;

    do {

        printf("\n===== MENU =====\n");
        printf("1 - Mensagem\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Voce escolheu a mensagem!\n");
        }
        else if (opcao != 2) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 2);

    printf("Programa encerrado.\n");
} 
