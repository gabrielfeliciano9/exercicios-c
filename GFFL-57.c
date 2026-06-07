#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908       *");
	printf("\n* Programa GFFL-57 - A Central do Brinquedo Eletronico    *");
	printf("\n***************************************************************");
	
	int cor;
	
printf("\nEscolha uma cor:\n");
printf("1 - Verde\n");
printf("2 - Amarelo\n");
printf("3 - Vermelho\n");
scanf("%d", &cor);

switch (cor) {

    case 1:
        printf("O urso diz: Vamos brincar la fora!\n");
        break;

    case 2:
        printf("O urso diz: Estou ficando com soninho...\n");
        break;

    case 3:
        printf("O urso diz: Estou com fome, hora do lanche!\n");
        break;

    default:
        printf("Cor desconhecida.\n");
}
} 
