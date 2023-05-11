#include <stdlib.h>
#include <stdio.h>

int main(){
	int a;
	printf("Entre com sua idade: ");
	scanf("%i", &a);
	
	if(a<18 || a>=65)
	printf("Voce esta apto a receber nossos descontos promocionais!");
	else
	printf("Infelizmente voce nao tem a idade ideal para receber descontos.");
}
