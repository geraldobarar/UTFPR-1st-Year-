/*ex5*/
#include <stdio.h>

int main()
{
    int ordem, i, j, simetrica;
    
    printf("Qual a ordem da matriz:");
    scanf("%d", &ordem);
    
    int matriz[ordem][ordem];
    
    for (i=0; i<ordem; i++)
    {
        for(j=0; j<ordem; j++)
        {
            printf("Elemento:[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz\n");
    
    for (i=0; i<ordem; i++)
    {
        for (j=0; j<ordem; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    simetrica = 1;
    
    for (i=0, j=0; i<ordem; i++, j++)
    {
        if (matriz[i][j] != matriz[j][i])
        {
            simetrica = 0;
        }
    }
    
    if (simetrica == 1)
    {
        printf("É simétrica!");
    }else
    {
        printf("Não simétrica");        
    }

    return 0;
}
