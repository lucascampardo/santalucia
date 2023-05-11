#include <stdio.h>
#include <stdlib.h>

main(){
	char nome1,nome2,nome3,nome4,nome5;
	float salario[5];
	
	for(salario=0;salario<5;salario++){
		printf("Digite o salario %f: \n",salario+1);
		scanf("%f",&salario[5]);
	}
	
	printf("Digite seu nome: ");
	scanf("%c", &nome1);
	printf("Digite seu nome: ");
	scanf("%c", &nome2);
	printf("Digite seu nome: ");
	scanf("%c", &nome3);
	printf("Digite seu nome: ");
	scanf("%c", &nome4);
	printf("Digite seu nome: ");
	scanf("%c", &nome5);

}
