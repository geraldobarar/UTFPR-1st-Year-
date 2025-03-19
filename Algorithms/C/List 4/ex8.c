/*ex08*/

#include <stdio.h>
#include <math.h>

int calculo (int a, int r)
{
    int i, soma = 0, termo = a;
    for (i = 0; i < 5; i++)
    {
        soma = soma + termo;
        termo = termo + r;
    }
    return soma;
}

int main()
{
    int a, r;
    
    printf("Escreva o primeiro termo: \n");
    scanf("%d", &a);
    printf("Escreva a razão:\n");
    scanf("%d", &r);
    
    printf("A soma dos 5 primeiros termos e de: %d", calculo (a, r));
    

    return 0;
}
