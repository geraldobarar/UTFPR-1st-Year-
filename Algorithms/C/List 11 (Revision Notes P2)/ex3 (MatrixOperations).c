#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, nulos=0, opcao, simetria=1;
    
    printf("Qual a ordem da matriz:\n");
    scanf("%d", &n);    
    
    int matriz[n][n], ds[n];
    
    float esparcidade;

    
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("Digite o elemento[%d][%d]\n", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] == 0)
            {
                nulos++;
            }
        }
    }
    
    printf("\nMATRIZ\n");
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("O que deseja:<1>Grau de Esparcidade <2>Simetria <3>DiagonalSec\n");
    scanf("%d", &opcao);
    
    switch(opcao)
    {
        case 1:
            esparcidade = (nulos/(float)(n*n))*100;
            printf("O Grau de Esparcidade é de: %.0f%%", esparcidade);
            break;
        case 2:
            for (i=0, j=n-1; i<n; i++, j--)
            {
                if(matriz[i][j]!=matriz[j][i]);
                {
                    simetria=0;
                    break;
                }
            }
            if (simetria == 1)
            {
                printf("A matriz é simétrica");                
            }else
            {
                printf("A matriz não é simétrica");
            }
            break;
        case 3:
            printf("Os elementos da Diagonal Secundaria são:\n");
            
            for(i=0, j=n-1; i<n; i++, j--)
            {
                ds[i] = matriz [i][j];
            }
            
            for (i=0; i<n; i++)
            {
                printf("%d ", ds[i]);
            }
            break;
        default:
            printf("Opção Inválida");
            break;
    }
    
    return 0;
}