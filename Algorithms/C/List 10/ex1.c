/*ex3*/
#include <stdio.h>
#define O 5

int main()
{
    int matriz[O][O], i, j;
    
    for (i=0; i<O; i++)
    {
        for (j=0; j<O; j++)
        {
            matriz[i][j] = i*j;            
        }
    }
    
    printf("\nMatriz Principal\n");
    for (i=0; i<O; i++)
    {
        for (j=0; j<O; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
