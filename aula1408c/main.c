#include <stdio.h>
#include <stdlib.h>
#define PI  3.14
int main()
{
    float area, perimetro, raio;
    printf("Digite o valor do Raio (r) \n");
    scanf("%f", &raio);
    area = PI * raio * raio;
    perimetro = 2 * PI * raio;
    printf("Valor da area:     %6.2f    \n", area);
    printf("Valor do perimetro:   %6.2f  \n", perimetro);
    return 0;
}
