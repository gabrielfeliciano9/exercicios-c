#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("\n* Programa GFFL-20 -    Ano bissexto                        *");
	printf("\n*************************************************************");
	
	int ano;
	
	printf("\n\nDigite o ano: ");
	scanf("%d", &ano);
	
	 if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
	 	printf("ano %d bissexto. ", ano);
	 	
	 } else {
	 	printf("ano %d nao bissexto.", ano);
	 	
	 }
return 0;

}
	   
