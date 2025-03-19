/*ex2*/
#include <stdio.h>
#define TAM 5

int main()
{
    int f[TAM], i, numero;
    
    for (i=0; i<TAM; i++)
    {
        printf("Digite o %d° elemento:\n", i + 1);
        scanf("%d", &f[i]);
        f[i] = i * f[i];
    }
    
    for (i=0; i<TAM; i++)
    {
        printf("%d\n", f[i]);        
    }

    return 0;
}
