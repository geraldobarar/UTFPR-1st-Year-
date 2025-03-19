/*ex2 */
#include <stdio.h>
#define L 7
#define C 5

int main()
{
    int matriz[L][C];
    int i=0, j=0, soma = 0;
    
    while(i<L)
    {
        j=0;
        while(j<C)
        {
            printf("Digite o elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            j++;
        }
        printf("Digite o elemento[%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
        i++;
    }
    
    
    
    printf("\nMatriz Principal\n");
    i=0;
    while(i<L)
    {
        j=0;  
        soma=0;
        while(j<C)
        {
            printf("%d\t", matriz[i][j]);
            soma = soma + matriz [i][j];
            j++;
        }
        printf("SOMA:%d\t\n", soma);
        i++;
    }

    return 0;
}