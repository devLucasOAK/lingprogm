#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra, letra2;
    int x;
    printf("Digite um caractere   \n");
    scanf("%c", &letra);
    printf("Digite outro caractere   \n");
    scanf("%c", &letra2);
    scanf("%c", &x);
    printf("Valor de x %d \n", x);
    printf("Letras digitadas:     %c    e     %c  \n", letra, letra2);
    return 0;
}
