/*ex6*/

#include <stdio.h>

int main()
{
    int matriz[5][5], dprincipal[5], dsecundaria[5], sl4=0, sc2=0, sdp=0, sds=0;
    int i, j, st=0;
    
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("Elemento[%d][%d]: ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz\n");
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    for (i=3, j=0; j<5; j++)
    {
        sl4 += matriz[i][j];
    }
    
    printf("A soma da linha 4 é igual a: %d\n", sl4);
    
    for (i=0, j=2; i<5; i++)
    {
        sc2 += matriz[i][j];
    }
    
    printf("A soma da coluna 2 é igual a: %d\n", sc2);
    
    for (i=0, j=0; i<5, j<5; i++, j++)
    {
        dprincipal[i] = matriz[i][j];
        sdp += dprincipal[i];
    }
    
    printf("A soma da Diagonal Principal é: %d\n", sdp);
    
    for (i=0, j=4; i<5; i++, j--)
    {
        dsecundaria[i] = matriz[i][j];
        sds += dsecundaria[i];
    }
    
    printf("A soma da Diagonal Secundária é: %d\n", sds);
    
    for(i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            st += matriz[i][j];
        }
    }
    
    printf("A soma total dos elementos é igual a: %d", st);
    

    return 0;
}