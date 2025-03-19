//tabuada

#include <stdio.h>

void calculo(int numero)
{
    int i = 0;

    do
    {
        printf("%d x %d = %d\n", numero, i, numero*i);
        i++;
    } while (i < 11);
}

int main()
{
    int numero, opcao;//precisaria iniciar em 1 em while
    
    do
    {
        printf("informe o numero da tabuada:\n");
        scanf("%d", &numero);

        calculo(numero);

        printf("Deseja calcular a tabuada novamente? <1> sim, <2> nao\n");
        scanf("%d", &opcao);
    } while (opcao == 1);


    return 0;
}
