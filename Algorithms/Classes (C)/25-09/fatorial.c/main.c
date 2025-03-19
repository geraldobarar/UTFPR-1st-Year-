/*ex2*/

#include <stdio.h>
#include <math.h>

int fatorial (int numero)
{
    int fatorial, n=numero;
    fatorial = 1;
    if (n == 0)
    {
        return fatorial;
    }else
    {
        do
        {
            fatorial = fatorial * n;
            n--;
        } while (n>=1);
    }
    return fatorial;
}
    
int main()
{
    int numero, op;
    do
    {
        printf("Digite um número:\n");
        scanf("%d", &numero);
        printf("O fatorial desse número é:%d\n", fatorial(numero));
        printf("Deseja um novo nmero: <1>SIM <2>NAO\n");
        scanf("%d", &op);
    } while (op ==1);
    
    return 0;
}


