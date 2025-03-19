/*fatorial*/

#include <stdio.h>

int fatorial (int n)
{
    int fatorial = 1;
    
    for (int n = numerador; n > 0; n--)
    {
        fatorial = fatorial * n;
        n--;        
    }
    
    return fatorial;
}

int denomindor

int main()
{
    int numerador, soma = 0; 
    
    for (numerador = 1; numerador<=50; numerador++)
    {
        int resultado = fatorial(numerador);
        soma = soma + resultado;
        
    }
    printf("%d", soma);

    return 0;
}
