#include <stdlib.h>
#include <stdio.h>

main(){
    int x, reajuste;
    char nome[5][20];
    float salario[5];

    for (x=0;x<5;x++){
        printf("Digite o nome %d: ",x+1);
        scanf("%s",&nome[x]);
        printf("Digite o salario %d: ",x+1);
        scanf("%f",&salario[x]);
    }
    printf("Digite a porcentagem de aumento:");
    scanf("%d",&reajuste);
    printf("===Mostrando o salario com o reajuste===\n");
    for (x=0;x<5;x++){
        printf("Nome %d:%s ->",x+1,nome[x]);
        salario[x]+=(salario[x]*reajuste)/100;
        printf("Salario = %d=%.2f \n",x+1,salario[x]);
    }
}