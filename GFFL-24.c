#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908     *");
	printf("\n* Programa GFFL-24 -    Pode votar?                         *");
	printf("\n*************************************************************");
	
	int id;
	
	printf("\n\nDigite sua idade: ");
	scanf("%d", &id);
	
	 if (id >= 16){
	 	printf("PODE VOTAR");
	 	
	 } else {
	 	printf("NAO PODE VOTAR");
	
	 }
} 
	 
