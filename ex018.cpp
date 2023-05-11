#include <stdio.h>
#include <stdlib.h>

main(){
	int x;
	char nome[5][20];
	for(x=0;x<5;x++){
		printf("Digite o nome %d: \n",x+1);
		scanf("%s",&nome[x]);
	}
}
