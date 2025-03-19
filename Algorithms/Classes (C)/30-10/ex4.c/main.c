/*ex4*/
//foto

#include <stdio.h>
#define TAM 6

void media (float vet[TAM])
{
    int i, soma = 0;
    float media;
    for (i=0; i<TAM; i++)
    {
        soma = soma + vet[i];
        media = soma / (i+1);
    }
    printf("A media da turma é de: %f\n", media);
}

int main()
{
    float F[TAM];
    int i, num, vetor;
    printf("Digite a nota do aluno %d:\n", i+1 );
    scanf("%d", &F[i]);
    printf("Digite a nota do aluno %d:\n", i+1 );
    scanf("%d", &F[i]);
    printf("Digite a nota do aluno %d:\n", i+1 );
    scanf("%d", &F[i]);
    
    for (i= 0; i<TAM; i++)
    {
        printf("Digite a nota do aluno %d:\n", i+1 );
        scanf("%d", &F[i]);
    }
    
    media(F); // so F mesmo
    return 0;
}
