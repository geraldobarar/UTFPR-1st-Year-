/*ex15*/

#include <stdio.h>
#include <math.h>

float calculo (int angulo, float altura)
{
    float radianos = angulo * M_PI / 180.0;
    return altura / sin(radianos);
}

int main()
{
    int angulo;
    float altura;
    printf("Qual o angulo formado:\n");
    scanf("%d", &angulo);
    printf("Qual a altura da parede em metros\n");
    scanf("%f", &altura);
    
    float tamanho = calculo(angulo, altura);
    
    printf("O tamanho da escada é de %.2fm", tamanho);

    return 0;
}
