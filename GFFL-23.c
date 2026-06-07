#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908     *");
	printf("\n* Programa GFFL-23 -    Maior de dois numeros               *");
	printf("\n*************************************************************");
	
	int n1, n2;
	
	printf("\n\nDigite um numero: ");
	scanf("%d", &n1);
	
	printf("\nDigite outro numero: ");
	scanf("%d", &n2);
	
	 if (n1 > n2){
	 	printf("%d maior que %d", n1, n2);
	 	
	 } else if (n1 < n2){
	 	printf("%d maior que %d", n2, n1);
	
	} else {
		printf("Os dois numeros sao iguais: %d", n1);
		
	} 
}
	 	
