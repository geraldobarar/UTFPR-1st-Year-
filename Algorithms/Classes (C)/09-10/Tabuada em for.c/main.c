//tabuada

#include <stdio.h>


void tabuada(int num)
{
    int i;
    printf("Tabuada do %d: \n", num);
    for (i = 0; i<=10; i++)
        printf("%d x %d = %d\n", num, i, num*i);
}


/*
int main()
{
    int opcao;
    
    
    do
    {
        int i, j, k;
        for (k=0; k<=1; k++)
        {
            printf("\n");
            for(i=0; i<6; i++)
                printf("Tabuada do %3d", i+4*k+1);
            printf("\n");
            for (i = 0; i <= 9; i++)
            {
                for (j=2+4*k; j <=5+4*k; j++)
                    printf("%3d x%3d=%3d", j, i, j*i);
                printf("\n");
            }
        }

//        calculo(numero);

        printf("Deseja calcular a tabuada novamente? <1> sim, <2> nao\n");
        scanf("%d", &opcao);
    } while (opcao == 1);
*/

int main(){
    int numero;
    char resp;
    do {
        printf("numero:\n");
        scanf("%d", &numero);
        tabuada(numero);
        printf("Deseja mais um? S/N\n");
        scanf("%c", &resp);
    }while (resp=='S' || resp == 's');

    return 0;
}
