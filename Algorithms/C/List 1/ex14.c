/*ex14*/

#include<stdio.h>

int main()
{
    float salario, vendas, percentual, total;
    int numero;
    
    printf("Qual é o número do vendedor:\n");
    scanf("%d", &numero);
    printf("Qual o salário fixo:\n");
    scanf("%f", &salario);
    printf("Quantas vendas realizou:\n");
    scanf("%f", &vendas);
    printf("Qual o percentual que o vendedor ganha:\n");
    scanf("%f", &percentual);
    
    total = (vendas*(percentual/100) + salario);
    
    printf("O vendedor de código %d receberá o valor de R$ %.2f", numero, total);
    
    return 0;
    
}