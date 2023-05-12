#include <stdlib.h>
#include <stdio.h>
// Programa de troca
main(){
    int a, b, troca;

    printf("Entre com o valor de a: ");
    scanf("%d",&a);
    printf("Entre com o valor de b: ");
    scanf("%d",&b);
    printf("Valores antes da troca: a=%d e b=%d \n",a,b);
    troca=a;
    a=b;
    b=troca;
    printf("Valores depois da troca: a=%d e b=%d \n", a,b);
}