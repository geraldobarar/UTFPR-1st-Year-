/*ex04*/

#include <stdio.h>

int main()
{
    int divisor, dividendo, soma;
    for (divisor = 1; divisor <=30; divisor++)
    {
        soma = 0; //inicio aqui pois deve ser inicializada para cada divisor
        printf("\n%d:", divisor); 
        for (dividendo=1; dividendo<=divisor-1; dividendo++)
        {
            if ((divisor%dividendo)==0)
            {
                printf(" %d - ", dividendo);
                soma = soma + dividendo;
            }
        }
        if (soma > divisor)
            {
                printf("O numero %d é Abundante", divisor);
                printf("\nSoma: %d", soma);
            } else
            {
                printf("O numero %d é Reduzido", divisor);
            }
        }
    return 0;
}
 // i = dividendo
 //

