#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-38 - Senha correta                            *");
	printf("\n***************************************************************");
	
	int senha, n;
	
	senha = 2026;
	n = 0;
	
	while (n != 2026){
		printf("\nInforme a senha: ");
		scanf("%d", &n);
		
		if (n != senha){
			printf("Senha incorreta");
		}		
} 
  printf("Senha correta! Acesso liberado.");
} 
