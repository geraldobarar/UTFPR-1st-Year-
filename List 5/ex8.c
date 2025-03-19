/*ex8*/

#include <stdio.h>

int main()
{
    float elemento, numerador = 1, total = 0;
    
    while(numerador<=99)
    {
        elemento = (numerador/((numerador + 1)/ 2));
        total = total + elemento;
        numerador= numerador + 2;
    }
    
    printf("%.2f\n", total);

    return 0;
}
