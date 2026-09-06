#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("\n* Programa GFFL-25 -    Notas e aprovação                   *");
	printf("\n*************************************************************");
	
	int mf;
	
	printf("\n\nInforme sua media final: ");
	scanf("%d", &mf);
	
	 if (mf >= 6){
	 	printf("APROVADO");
	 	
	 } else if (mf >= 4 && mf < 6){
	 	printf("RECUPERACAO");
	 	
	 } else {
	 	printf("REPROVADO");
	 }
}
