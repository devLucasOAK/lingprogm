#include <stdio.h>
#include <stdlib.h>
#define L 5
#define C 3
int main()
{
    float matriz[L][C];
    int i;
    for(i=0; i<L; i++){
            printf("Digite a base do Triangulo %d \n", i+1);
            scanf("%f", &matriz[i][0]);
            printf("Digite a altura do Triangulo %d \n", i+1);
            scanf("%f", &matriz[i][1]);
            matriz[i][2] =  (matriz[i][0] * matriz[i][1]) / 2;
    }
    for(i=0; i<L; i++){
        printf("A area do Triangulo %d = %6.2f \n", i+1,  matriz[i][2] );
    }
    return 0;
}
