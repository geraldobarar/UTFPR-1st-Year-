/*ex2*/
#include <stdio.h>
#include <math.h>

float quadrado(int numero)
{
    float resultado;
    resultado = pow(numero, 2);
    return resultado;
}

float raizcubica(int numero)
{
    float resultado;
    resultado = cbrt (numero);
    return resultado;
}

float raizquadrada(int numero)
{
    float resultado;
    resultado = sqrt(numero);
    return resultado;
}

float cubo(int numero)
{
    float resultado;
    resultado = pow(numero, 3);
    return resultado;
}

int main()
{
    float numero;
    printf("Digite um número positivo, diferente de 0:\n");
    scanf("%f", &numero);
    
    printf("O quadrado do número é %.2f\n", quadrado(numero));
    printf("A raiz cubica é %.2f\n", raizcubica(numero));
    printf("A raiz quadrada é %.2f\n", raizquadrada(numero));
    printf("O cubo do número é %.2f\n", cubo(numero));

    return 0;
}
