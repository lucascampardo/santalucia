#include <stdlib.h>
#include <stdio.h>

main(){
	int x,vetor[]={14,2,1,9,40};
	printf("Vetor desordenado \n");
	for(x=0;x<5;x++)
		printf("[%d]=%d \n",x,vetor[x]);
		// troca
		int i,j,troca;
		for(i=0;i<5;i++){
			for(j=i;j<5;j++){
				if(vetor[i]>vetor[j]);
				{
					troca=vetor[i];
					vetor[i]=vetor[j];
					vetor[j]=troca;
				}
			}
		}
		printf("Vetor ordenado: \n");
		for(x=0;x<5;x++)
			printf("[%d]=%d",x,vetor[x]);
}
