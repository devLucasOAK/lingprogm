#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioBruto, imposto;
    char estadoCivil;
    printf("Digite o salario bruto:  \n");
    scanf("%f", &salarioBruto);
    fflush(stdin);
    printf("Digite c [casado] ou s[solteiro] \n");
    estadoCivil = getchar();
    switch(estadoCivil){
    case 'c':
    case 'C':
        imposto = salarioBruto * 0.09;
        break;
    case 's':
    case 'S':
        imposto = salarioBruto * 0.10;
        break;
    default:
        imposto = 0.0;
        printf("Estado civil incorreto..\n");
    }
    printf("Salario Bruto:  %6.2f \n", salarioBruto );
    printf("Imposto: %6.2f \n", imposto);
    return 0;
}
