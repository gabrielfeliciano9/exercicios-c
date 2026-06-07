#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-49- Pedir senha ate acertar                   *");
	printf("\n***************************************************************");
	
	 int senha;

    do {

        printf("\nDigite a senha: ");
        scanf("%d", &senha);

        if (senha != 1111) {
            printf("Senha incorreta!\n");
        }

    } while (senha != 1111);

    printf("Acesso liberado!\n");

}
