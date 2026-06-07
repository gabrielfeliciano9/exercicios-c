#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908           *");
	printf("\n* Programa GFFL-41 - numero primo com while                   *");
	printf("\n***************************************************************");
	
	int n, i, primo;
	
 i = 2;
 primo = 1;

  printf("\nDigite um numero: ");
  scanf("%d", &n);

    while (i < n) {
     if (n % i == 0)
        primo = 0;
    i++;
}

    if (primo == 1)
     printf("primo");
      else
       printf("Nao primo");
   }
