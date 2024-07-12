/*ex06*/

#include <stdio.h>

float dr (float moeda)
{
    return moeda * 5.026;  
}

float rd (float moeda)
{
    return moeda / 5.026;
}

int main()
{
    float moeda;
    int opcao, denovo = 1;
    while (denovo == 1)
    {
        printf("Qual é o valor a ser convertido:\n ");
        scanf("%f", &moeda);
        printf("<1> D-R\n<2> R-D\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 1:
                printf("você tem R$ %.2f\n", dr(moeda));
                break;
            case 2:
                printf("Você tem U$ %.2f\n", rd(moeda));
                break;
            default:
                printf("opcao inválida");
        }
        printf("Deseja calcular novamente?\n<1>S\n<2>N\n");
        scanf("%d", &denovo);
    }
    return 0;
}
