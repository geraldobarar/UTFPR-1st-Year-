/*ex2*/

#include <stdio.h>
#define TAM 6

void substitui (int vet[TAM])
{
    int i=0;
    while (i<TAM)
    {
        vet [i] = vet[i] * i;
        printf("%d -", vet[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    int F[TAM], i=0;
    while (i<TAM)
    {
        printf("\nDigite um número para a posição %d:\n", i+1 );
        scanf("%d", &F[i]);
        i++;
    }
    substitui(F); // so F mesmo
    return 0;

}


