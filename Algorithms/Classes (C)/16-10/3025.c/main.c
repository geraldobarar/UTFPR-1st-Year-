/*ex3*/
#include <stdio.h>
#include <math.h>

int main()
{
    int numero = 1000, primeira, segunda, soma;
    
    while (numero <= 9999)
    {
        primeira = numero / 100;
        segunda = numero - (primeira * 100);
        soma = primeira + segunda;
        
        if (pow(soma,2)== numero)
        {
            printf("%d\n", numero);
        }
        
        numero ++;
    }

    return 0;
}
