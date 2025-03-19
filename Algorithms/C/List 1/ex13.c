/*ex13*/

#include<stdio.h>

int main()
{
    float valor, quantidade, total;
    int codigo;
    
    printf("Qual é o código da peça:\n");
    scanf("%d", &codigo);
    printf("Qual é o valor unitario:\n");
    scanf("%f", &valor);
    printf("Qual a quantidade de produtos:\n");
    scanf("%f", &quantidade);
    
    total = quantidade*valor;
    
    printf("Para a peça de código %d, temos o total de R$%.2f", codigo, total);
    
    return 0;
}