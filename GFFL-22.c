#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("\n* Programa GFFL-22 -    Par ou Impar                        *");
	printf("\n*************************************************************");

  int n;
  
   printf("\n\nDigite um numero: ");
   scanf("%d", &n);
   
    if (n % 2 == 0){
    	printf("PAR");
    	
	} else {
		printf("IMPAR");
		
	} 
return 0;	
} 
