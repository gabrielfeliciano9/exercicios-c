#include <stdio.h>
#include <stdlib.h>

int main(){

	printf("\n* Programa GFFL-21 -    Número positivo ou negativo         *");
	printf("\n*************************************************************");
	
	int n;
	
	printf("\n\nInforme um numero: ");
	scanf("%d", &n);
	
	 if (n > 0 ){
	 	printf("POSITIVO");
	 	
	 } else if (n < 0){
	 	printf("NEGATIVO");
	 
	 } else {
	 	printf("ZERO");
	
	 }
	
return 0;

} 
