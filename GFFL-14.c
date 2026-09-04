#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("\n* Programa GFFL-14 - Tipo de Triangulo                     *");
	printf("\n***********************************************************");
	
	 float lado1,lado2,lado3;
	  
	  printf("\n\nDigite o primeiro lado: \n");
	  scanf("%f", &lado1);
	  
	  printf("Digite o segundo lado: \n"); 
	  scanf("%f", &lado2);
	  
	  printf("Digite o terceiro lado: \n");
	  scanf("%f", &lado3);
	  
	   if (lado1 == lado2 && lado2 == lado3 && lado3 == lado1){
	   	 printf("Triangulo Equilatero");
	
	} else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
		printf("Triangulo Isosceles");
		
	} else {
		printf("Triangulo Escaleno");
	}
	  
}
