/*PA 2*/
#include <stdio.h>

int calculando(int primeiro, int razao, int vezes)
{
    int soma = 0, i, termo=primeiro;
    for (i=vezes; i>0; i--)
    {
        soma = soma + termo; //dps substituir o termo por "primeiro"
        termo = termo + razao;
    }
    return soma;
}

int main()
{
    int primeiro, razao, vezes, soma, opcao;
    do
    {
        printf("Qual é o primeiro numero:\n");
        scanf("%d", &primeiro);
        printf("Qual é a razão:\n");
        scanf("%d", &razao);
        printf("Quantas vezes:\n");
        scanf("%d", &vezes);
        
        soma = calculando(primeiro, razao, vezes);
        
        printf("A soma de %d vezes o termo dado resulta: %d\n", vezes, soma);  
        
        printf("Deseja calcular novamente? <1>Sim <>Não\n");
        scanf("%d", &opcao);
        
    }while (opcao == 1);

    return 0;
}
