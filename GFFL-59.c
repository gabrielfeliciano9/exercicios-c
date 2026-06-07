#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908        *");
	printf("\n* Programa GFFL-59 - O Assistente de Direcao (GPS Sem Mapa)*");
	printf("\n***************************************************************");
	
	  char direcao;

    printf("\nDigite uma direcao (N, S, L ou O): ");
    scanf(" %c", &direcao);

    switch (direcao) {

        case 'N':
            printf("Seguir para o Norte.\n");
            break;

        case 'S':
            printf("Seguir para o Sul.\n");
            break;

        case 'L':
            printf("Virar a Leste (Direita).\n");
            break;

        case 'O':
            printf("Virar a Oeste (Esquerda).\n");
            break;

        default:
            printf("Comando invalido! Pare o robo.\n");
    }
} 
