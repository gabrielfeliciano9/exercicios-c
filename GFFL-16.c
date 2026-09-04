#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("\n* Programa GFFL-16 -  Multiplo de 3 e/ou 5                  *");
	printf("\n*************************************************************");
	
	int npedido;
	
	printf("\n\nDigite o numero do pedido: \n");
	scanf("%d", &npedido);
	
	if (npedido % 3 == 0 && npedido % 5 == 0){
		printf("Parabens, voce ganhou uma sobremesa e um refrigerante!");
	
	} else if (npedido % 5 == 0){
	    printf("Parabens, voce ganhou uma sobremesa!");
	
	} else if (npedido % 3 == 0){
		printf("Parabens, voce ganhou um refrigerante!");
	
	} else {
		printf("Infelizmente voce nao ganhou a promocao especial");
	}

} 
