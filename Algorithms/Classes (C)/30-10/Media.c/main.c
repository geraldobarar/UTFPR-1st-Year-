/*exMEDIA*/


#include <stdio.h>
#define TAM 6

void media (int vet[TAM])
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
    float F[TAM, media=0, soma=0];
    int i;
    for (i= 0; i<=TAM-1; i++)
    {
        printf("Digite a media do aluno %d:\n", i+1 );
        scanf("%d", &F[i]);
    }
    
    media(F); // so F mesmo
    return 0;

}
