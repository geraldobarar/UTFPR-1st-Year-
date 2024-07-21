/*ex2*/

#include <stdio.h>

int main()
{
    int numerador, denominador = 500, i=1; 
    float soma=0.0, elemento;
    
    do
    {
        if (i % 2 != 0)
        {
            numerador = 2;
        } else
        {
            numerador = -5;
        }
        
        elemento = (float)numerador / denominador;
        
        printf("%d/%d\n", numerador, denominador);
        
        soma = soma + elemento;
        
        denominador = denominador - 50;
        i++;
        
    } while (i < 6);
    
    printf("soma: %.2f\n", soma);

    return 0;
}
