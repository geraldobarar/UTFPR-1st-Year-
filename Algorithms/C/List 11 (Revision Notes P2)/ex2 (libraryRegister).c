#include <stdio.h>

struct BIBLIOTECA{
    int paginas;
    int edicao;
};

int main()
{
    struct BIBLIOTECA matematica[3];
    struct BIBLIOTECA historia[3];
    
    char opcao;
    int i, j;
    
    printf("Qual a opcao:<1>Matematica <2>História\n");
    opcao=getchar();
    
    if(opcao==1)
    {
        for (i=0; i<3; i++)
        {
            printf("Quantas paginas:\n");
            scanf("%d", &matematica[i].paginas);
            printf("Qual edição:\n");
            scanf("%d", &matematica[i].edicao);
        }
    }else
    {
        for (i=0; i<3; i++)
        {
            printf("Quantas paginas:\n");
            scanf("%d", &historia[i].paginas);
            printf("Qual edição:\n");
            scanf("%d", &historia[i].edicao);
        }
    }
    
    printf("Em matemática, temos os dados:\n");
    for (i=0; i<3; i++)
    {
        printf("Livro %d: %d paginas\n", i+1, matematica[i].paginas);
        printf("Livro %d: %d Edicãp\n", i+1, matematica[i].edicao);
        
    }

    printf("Em história, temos os dados:\n");
    for (i=0; i<3; i++)
    {
        printf("Livro %d: %d paginas\n", i+1, historia[i].paginas);
        printf("Livro %d: %d Edicãp\n", i+1, historia[i].edicao);
    }
    
    return 0;
}
