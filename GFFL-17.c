#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("\n* Programa GFFL-17 -   O Sensor do Parque Temático          *");
	printf("\n*************************************************************");
	
	int hnino;
	
	printf("\n\naltura em (cm): \n");
	scanf("%d", &hnino);
	
	if (hnino >= 140){
		printf("LIBERADO (acender luz verde)");
		
	} else {
		printf("BARRADO (acender luz vermelha)");
		
	}
}
 
