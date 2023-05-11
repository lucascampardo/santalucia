#include <stdlib.h>
#include <stdio.h>

int main(){
	int idade;
	char sexo;
	printf("Entre com sua idade: ");
	scanf("%d", &idade);
	fflush(stdin); // limpar memoria residual
	printf("Entre com o sexo: ");
	scanf("%c", &sexo);
	if(idade>=18 && (sexo=='M' || sexo=='m')) // && é igual a E 
	printf("Apto para se alistar, parabéns!");
	else
	printf("Infelizmente inapto");
}
