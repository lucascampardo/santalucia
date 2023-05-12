#include <stdio.h>
#include <stdlib.h>

main(){
    int l,c;
    int matriz[3][2]={{25,36},{9,14},{6,22}};
    for (l=0;l<3;l++)
        for(c=0;c<2;c++)
            printf("Matriz[%d][%d]=%d \n",l,c,matriz[1][c]);
}