/*ex3*/

#include <stdio.h>

int main()
{
    int numerador=1000, denominador=1, i=0;
    float soma=0.0, elemento;
    
    do
    {
        elemento = (float)numerador/denominador;
        
        if (i%2 != 0)
        {
            elemento = elemento * (-1);    
        }
        
        soma = soma + elemento;
        
        printf("%d/%d\n", numerador, denominador);
        
        numerador = (numerador - 3);
        denominador ++;
        i++;
        
    } while(i<50);
    
    
    printf("soma: %.2f", soma);

    return 0;
}
