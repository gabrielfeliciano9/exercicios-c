#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-54 - Validar numero entre 1 e 5               *");
	printf("\n***************************************************************");
	
	int nivel;

    do {

        printf("\nDigite um nivel de dificuldade (1 a 5): ");
        scanf("%d", &nivel);

        if (nivel < 1 || nivel > 5) {
            printf("Nivel invalido! Tente novamente.\n");
        }

    } while (nivel < 1 || nivel > 5);

    printf("Nivel escolhido: %d\n", nivel);
}
	
