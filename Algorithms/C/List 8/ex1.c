/*ex01*/
#include <stdio.h>

int main()
{
    int i, maior, menor, numero, lista[5];
    
    printf("Digite 5 valores:\n");
    
    for (i=0;i<5;i++)
    {
        printf("Digite o %d° número:\n", i + 1);
        scanf("%d", &lista[i]);
    }
    
    maior = lista[0];
    menor = lista[0];
    
    for (i=1; i<5; i++)
    {
        if (maior < lista[i])
        {
            maior = lista[i];
        }
        if (menor > lista[i])
        {
            menor = lista[i];
        }
    }
    
    printf("o maior e o menor numeros foram: %d e %d", maior, menor);

    return 0;
}