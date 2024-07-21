/*ex9*/

#include <stdio.h>

int main()
{
    int i=1, n;
    float soma=0, elemento;
    printf("Informe o numero:\n");
    scanf("%d", &n);
    
    while ( i <= n)
    {
        elemento = (1/i);
        soma = soma + elemento;
        i++;
    }
    
    printf("Soma: %.2f", soma);


    return 0;
}
