/*ex2*/
#include <stdio.h>

int main()
{
    int i, soma = 0;
    printf("Os multiplos de 7 entre 100 e 200:\n");
    
    for (i=100; i<=200; i++)
    {
        if (i%7==0)
        {
            printf("%d+", i);
            soma = soma + i;
        }
    }
    printf("a soma é %d", soma);
    return 0;
}
