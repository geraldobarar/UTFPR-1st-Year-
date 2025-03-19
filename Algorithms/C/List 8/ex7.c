/*07*/
#include <stdio.h>



int main()
{
  int i, vet1[5], vet2[5], opcao1;

    for (i = 0; i < 5; i++)
    {
        printf ("Digite um valor 1:\n");
        scanf("%d", &vet1[i]);
    }
    
    for (i = 0; i < 5; i++)
    {
        printf ("Digite um valor para o vetor 2:\n");
        scanf("%d", &vet2[i]);
    }
    
    printf("Escolha:<1>soma <2>diferença <3>produto <4>divisao\n");
    scanf("%d", &opcao1);
    
    switch (opcao1)
    {
        case 1:
            printf("A soma de cada um dos itens é:\n");
            for (i=0; i<5; i++)
            {
                printf("%d+%d=%d\n", vet1[i], vet2[i], vet1[i]+vet2[i]);
            }
            break;
        case 2:
            printf("A diferença dos itens é:\n");
            for (i=0; i<5; i++)
            {
                printf("%d-%d=%d\n",vet1[i], vet2[i], vet1[i]-vet2[i]);
            }
            break;
        case 3:
            printf("O produto dos itens é:\n");
            for(i=0; i<5; i++)
            {
                printf("%dx%d=%d\n", vet1[i], vet2[i], vet1[i]*vet2[i]);
            }
            break;
        case 4:
            printf("A divisão dos itens é:\n");
            for (i=0; i<5; i++)
            {
                if (vet1[i] == 0 || vet2[i]==0)
                {
                    printf("Resultado inválido!");
                }else
                {
                    printf("%d/%d=%.2f\n", vet1[i], vet2[i], (float)vet1[i]/vet2[i]);
                }
            }
            break;
        default:
            printf("Opção invalida!");
            break;
    }
    return 0;
}
