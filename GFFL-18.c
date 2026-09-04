#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	printf("\n* Programa GFFL-18 -   Login simples                        *");
	printf("\n*************************************************************");
	
	char senha [20], usuario [20];
	
	printf("\n\nLogin Biblioteca Digital");
	
	printf("\n Usuario: ");
	scanf("%s", &usuario);
	
	printf("\n Senha: ");
	scanf("%s", &senha);
	
      if (strcmp(usuario, "ADM2026") == 0 && strcmp(senha, "biblioteca123") == 0) {
		printf("Acesso Permitido");
		
	} else {
		printf("Acesso negado");
	}
return 0;
} 
