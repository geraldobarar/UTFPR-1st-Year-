/*ex5*/
#include <stdio.h>

int fatorial(int num)
{
    int resultado = 1, i;
    for (i=1; i <= 5; i++)
    {
        resultado = resultado * i;
    }
    return resultado;
}

int main()
{
    int num, total;
    printf("Escreva o numero:\n");
    scanf("%d", &num);
    
    total = fatorial(num);
    
    printf("O valor é: %d", total);
}