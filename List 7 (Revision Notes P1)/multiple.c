/*ex2*/

#include <stdio.h>

int main()
{
    int multiplos, soma = 0, i, m=0;
    
    for (i=100; i<= 200; i++)
    {
        if (i%7==0)
            {
                soma = soma + i;
                printf("%d\n", i);
            }
    }
    
    printf("soma: %d", soma);

    return 0;
}
