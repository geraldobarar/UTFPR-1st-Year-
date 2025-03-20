/*ex*/
#include <stdio.h>


int main()
{
    int i, j, matriz[5][5], diagonal[5], principal[5], determinante=0;
    int nump=1, nums=1;
    
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("Digite a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (i=0, j=4; i<5; i++, j--)
    {
        diagonal[i] = matriz[i][j];
    }
    
    printf("\nMatriz principal:\n");
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDiagonal Secundária\n");
    for (i=0; i<5; i++)
    {
        printf("%d ", diagonal[i]);
    }
    
    for(i=0, j=0; i<5; i++, j++)
    {
        principal[i]= matriz[i][j];
    }
    
    printf("\nDiagonal Principal\n");
    for (i=0; i<5; i++)
    {
        printf("%d ", principal[i]);
    }
    printf("\n");
    
    
    printf("\nDeterminante\n");
    
    for (i=0; i<5; i++)
    {
        nump = nump * principal[i];
        nums = nums * diagonal[i];
    }
    
    printf("Determinante: %d", nump-nums);
    

    return 0;
}
