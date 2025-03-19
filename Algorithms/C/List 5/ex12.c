/*ex12*/

#include <stdio.h>

int fatorial (int i)
{
    int resultado = 1, n=1;
    if (n == 0)
    {
        return 1;
    }
    while(n<=i)
    {
        resultado = resultado * n;
        n++;
    }
    return resultado;
}

int main()
{
    int i =0, denominador;
    float soma = 0.0, elemento;
    
    while (i<=5)
    {
        denominador = fatorial(i);
        elemento = 1.0 / denominador;
        soma = soma + elemento;
        printf("%d°= 1/%d\n", i, denominador);
        i++;
    }
    printf("A soma é: %.2f", soma);

    return 0;
}
