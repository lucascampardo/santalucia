#include <stdio.h>
#include <stdlib.h>

void digitar(){
	printf("Digite um numero: ");
}

main(){
	int a,b;
	digitar();
	scanf("%i",&a);
	digitar();
	scanf("%i",&b);
	resposta();
}


void resposta(){
	printf("Tchau");
}
