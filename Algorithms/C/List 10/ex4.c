/*ex4*/
#include <stdio.h>
#define L 7
#define C 5

int main()
{
    int matriz[L][C], i, j, maior, posicaoi, posicaoj;
    
    for (i=0; i<L; i++)
    {
        for (j=0; j<C; j++)
        {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    maior = matriz[0][0];
    
    printf("\nMATRIZ\n");
    
    for (i=0; i<L; i++)
    {
        for (j=0; j<C; j++)
        {
            printf("%d\t", matriz[i][j]);
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                posicaoi = i;
                posicaoj = j;
            }
        }
        printf("\n");
    }
    
    printf("O maior elemento está na posição [%d][%d]: %d", posicaoi, posicaoj, maior);

    return 0;
}
