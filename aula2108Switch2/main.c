#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    printf("Digite m[masculino] ou f[feminino]\n");
    sexo = getchar();
    switch(sexo){
    case 'm':
    case 'M':
        printf("Masculino \n");
        break;
    case 'f':
    case 'F':
        printf("Feminino \n");
        break;
    default:
        printf("Humm. Opcao invalida \n");
    }
    return 0;
}
