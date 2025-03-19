/*ex01*/
#include <stdio.h>

int main()
{
    int alturadegrau;
    float emcm, quantidade, altura;
    printf("qual é a altura em centimetros do degrau: \n");
    scanf("%d", &alturadegrau);
    printf("Qual altura em metros você quer chegar: \n");
    scanf("%f", &altura);
    
    emcm = altura * 100;
    quantidade = emcm / alturadegrau;
    
    printf("Para subir %.1f metros é necessário subir %.2f degraus de %d cm.",altura, quantidade, alturadegrau);

    return 0;
}

