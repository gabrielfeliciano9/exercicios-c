#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908     *");
	printf("\n* Programa GFFL-15 - Quantas caixas cabem dentro do caminhao*");
	printf("\n*************************************************************");
	
	float hcaminhao, ccaminhao, lcaminhao, hcaixa, ccaixa, lcaixa;
	int hcc, lcc, ccc, multcc;
	
	
	printf("\n\nDigite as dimensoes do CAMINHAO em metros (m)\n");
	
	  printf("Digite a altura: \n");
	  scanf("%f", &hcaminhao);
	
	  printf("Digite o comprimento: \n");
	  scanf("%f", &ccaminhao);
	  
	  printf("Digite a largura: \n");
	  scanf("%f", &lcaminhao);
	  
	  printf("\nDigite as dimensoes das CAIXAS em centimetros (cm)\n" );
	  
	  printf("Digite a altura: \n");
	  scanf("%f", &hcaixa);
	  
	  printf("Digite o comprimento: \n");
	  scanf("%f", &ccaixa);
	  
	  printf("Digite a largura: \n");
	  scanf("%f", &lcaixa);
	  
	  
	hcc = (hcaminhao * 100) / hcaixa;
	lcc = (lcaminhao * 100) / lcaixa;
	ccc = (ccaminhao * 100) / ccaixa;
	
	multcc = hcc * lcc * ccc;
	
	printf("Pode ser transportadas %d caixas no caminhao.", multcc);
	
}
	
	
