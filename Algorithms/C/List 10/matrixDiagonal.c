/*ex1*/

#include <stdio.h>
#define ORDEM 5

int main()
{
    int matriz[ORDEM][ORDEM];
    int diagonal[ORDEM];
    int i, j;
    
    for (i=0; i<ORDEM; i++)
    {
        for(j=0; j<ORDEM; j++)
        {
            printf("Digite o elemento a[%d][%d]:\n", i, j);
            scanf("%d", &matriz[i][j]);
            
        }
    }
    
    for (i=0, j=ORDEM-1; i<ORDEM, j>=0; i++, j--)
    {
        diagonal[i] = matriz[i][j];
    }
    
    printf("\nMATRIZ ORIGINAL\n");
    for(i=0; i<ORDEM; i++)
    {
        for (j=0; j<ORDEM; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nELEMENTOS DA DIAGONAL SECUNDARIA\n");
    for (i=0; i<ORDEM; i++)
    {
        printf("%d\t", diagonal[i]);
    }
    
    return 0;
}
