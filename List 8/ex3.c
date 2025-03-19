/*ex4*/
#include <stdio.h>
#define TAM 5

int main()
{
    int i, pares[TAM], impar[TAM], numeros[TAM], numerospares = 0, numerosimpar = 0;
    
    for (i=0; i< TAM; i++)
    {
        printf("Digite um valor para compor a lista:\n");
        scanf("%d", &numeros[i]);
    }
    
    for (i=0; i< TAM; i++)
    {
        if (numeros [i] % 2 == 0)
        {
            pares[numerospares] = numeros[i];
            numerospares ++;
        }else
        {
            impar[numerosimpar] = numeros[i];
            numerosimpar++;
        }
    }
    
    printf("A lista de números pares é formada por:\n");
    for (i=0; i < numerospares; i++)
    {
        printf("%d\n", pares[i]);
    }
    
    printf("A lista de impares é formada por:\n");
    for (i=0; i < numerosimpar; i++)
    {
        printf("%d\n", impar[i]);    
    }
    
    return 0;
}
