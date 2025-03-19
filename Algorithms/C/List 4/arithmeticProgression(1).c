/*PA**/

#include <stdio.h>

int calculo(int a, int r, int vezes)
{
    int i, soma = 0, termo=a;
    for (i=vezes; i>0; i--)
    {
        soma = soma + termo;
        termo = termo + r;
    }
    return soma;
}

int main()
{
    int a, r, vezes, opcao;
    do
    {
        printf("Qual o primeiro termo:\n");
        scanf("%d", &a);
        printf("Qual a razao:\n");
        scanf("%d", &r);
        printf("Quantas vezes fazer a soma:\n");
        scanf("%d", &vezes);
        
        printf("A soma dos %d primeiros termos é: %d\n", vezes, calculo(a, r, vezes));
        
        printf("Deseja calcular novamente: <1>Sim <>Não\n");
        scanf("%d", &opcao);

    } while (opcao == 1);
    return 0;  

}