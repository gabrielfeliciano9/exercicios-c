#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908     *");
	printf("\n* Programa GFFL-19 -   Ordem crescente (tres numeros)       *");
	printf("\n*************************************************************");
	
	int n1, n2, n3, troca;
	
	printf("\n\nNota aluno 1: ");
	scanf("%d", &n1);
	
	printf("\nNota aluno 2: ");
	scanf("%d", &n2);
	
	printf("\nNota aluno 3: ");
	scanf("%d", &n3);
	
	 if (n1 > n2){
    troca = n1;
    n1 = n2;
    n2 = troca;
     
	 } if (n1 > n3){
    troca = n1;
    n1 = n3;
    n3 = troca;

     } if (n2 > n3){
    troca = n2;
    n2 = n3;
    n3 = troca;
} 
     printf("Ordem crescente: %d, %d, %d.", n1,n2,n3);
     
return 0;

}  

