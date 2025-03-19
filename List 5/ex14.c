/*ex14*/

#include <stdio.h>

int divisao(int n)
{
    int d = 1, elemento, ndedivisores=0;
    
    while (d <= n)
    {
        elemento = n % d;
        if (elemento == 0)
        {
            ndedivisores = ndedivisores + 1;
        }
        d++;
    }
    return ndedivisores;
}

int main()
{
    int i= 1, n = 1, divisores;
    
    while (i <= 100)
    {
        divisores = divisao(n);
        if (divisores == 2)
        {
            printf("%d\n", n);
        }
        i++;
        n++;
    }
    return 0;
}


