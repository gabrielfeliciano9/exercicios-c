#include <stdio.h>
#include <stdlib.h>

int main(){

printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908       *");
	printf("\n* Programa GFFL-58 - A Calculadora de Bolso de 4 Operacoes*");
	printf("\n***************************************************************");
	
	float num1, num2;
    char operacao;

    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch (operacao) {

        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;

        case '/':
            printf("Resultado: %.2f\n", num1 / num2);
            break;

        default:
            printf("Operacao matematica nao reconhecida.\n");
    }

} 
