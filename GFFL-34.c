#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-34 - Verificar se um numero e primo           *");
	printf("\n***************************************************************");
	
	 int n,i,primo;
	 
	  printf("\nDigite um numero: ");
	  scanf("%d", &n);
	  
	  primo = 1;
	  
	   for (i = 2; i < n; i++){
	   	 if (n % i == 0){
	   	  primo = 0;
	   	  
	   }
	    } 
	    
	     if (primo == 1){
	     	printf("Numero primo");
		 } else {
		 	printf("Numero nao primo");
	
		 }
	}
	   
