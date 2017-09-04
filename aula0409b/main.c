#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Matriz Identidade \n");
    int m[5][5] = {{0}};
    int x;
    for(x = 0; x < 5; x++) {
        m[x][x] = 1;
    }
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
