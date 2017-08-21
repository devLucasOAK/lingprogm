#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Escolha pelo numero [ 1 a 3] !\n");
    int opc;
    scanf("%d", &opc);
    switch(opc){
    case 1:
        printf("Escolheu cafe \n");
        break;
    case 2:
        printf("Escolheu leite \n");
        break;
    case 3:
        printf("Escolheu pao \n");
        break;
    default:
        printf("Opcao invalida \n");
    }
    return 0;
}
