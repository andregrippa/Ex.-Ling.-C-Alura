#include <stdio.h>
#include <locale.h>

int main ()
{
	//imprime o cabe�alho do nosso jogo
	setlocale(LC_ALL, "Portuguese");
	printf("\n******************************************");
	printf("\n* Bem vindo ao nosso jogo de adivinha��o *");
	printf("\n******************************************");
	
	int numerosecreto = 42;
	int chute;
	
	printf("\nQual � o seu chute? ");
	scanf("%d", &chute);
	printf("\nSeu chute foi %d", chute);
	
	
	

	
}
