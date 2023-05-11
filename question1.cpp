#include <stdio.h>
#include <stdlib.h>

main(){
	float milhas, km;
	printf("Entre com a distancia em milhas: ");
	scanf("%f",&milhas);
	km = milhas * 1.61;
	
	printf("A distancia e: %f", km);
	
	return 0;
	
}
