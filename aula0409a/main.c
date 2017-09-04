#include <stdio.h>
#include <stdlib.h>
#define DIM 10
int main()
{
    //Zerar um vetor, consiste em colocar ZERO na
    //primeira posicao.
    int vetor[DIM] = {0};
    int i;
    for(i=0; i<DIM; i++){
        printf("Pos[%d] =>  %d \n",i, vetor[i]);
    }
    return 0;
}
