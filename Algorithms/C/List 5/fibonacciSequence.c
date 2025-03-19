/*ex13*/

#include <stdio.h>

int main()
{
    int n, ant1=1, ant2=0, atual, i = 1, soma = 1;
    

    printf("Quantos termos devem ser informados:\n");
    scanf("%d", &n);

    printf("%d\n", ant2);
    printf("%d\n", ant1);
    
    while (i <= (n-2))
    {
        atual = ant1 + ant2;
        printf("%d\n", atual);
        soma = soma + atual;
        ant2 = ant1;
        ant1 = atual;
        i++;
    }
    
    printf("Soma: %d", soma);
    
    return 0;
}



