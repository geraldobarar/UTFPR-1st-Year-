/*ex10*/
#include <stdio.h>

int main()
{
    int i=1, numerador=1;
    float elemento, soma=0;
    
    while (numerador <= 10)
    {
        elemento = (float)numerador/(numerador*numerador);
        
        if (numerador % 2 == 0)
        {
            elemento = elemento * (-1);
        }
        
        soma = soma + elemento;
        
        printf("%d° = %d / %d\n", i, numerador, (numerador*numerador));
        numerador ++;
        i++;
    }

    printf("%.2f", soma);

    return 0;
}
