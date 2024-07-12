/*ex12*/
#include <stdio.h>

float kw (float salario, float quantidade)
{
    float preco;
    return preco = salario / 5;
}

float calculatotal (float preco, float quantidade)
{
    float total; 
    return  preco * quantidade;
}

float calculadesconto (float total)
{
    float desconto;
    return total - (total *0.15) ;
}

int main()
{
    float salario, quantidade;
    printf("Qual é o valor do salário mínimo:\n");
    scanf("%f", &salario);
    printf("Quantos Kw são consumidos:\n");
    scanf("%f", &quantidade);
    
    float preco = kw(salario, quantidade);
    float total = calculatotal(preco, quantidade);
    float desconto = calculadesconto (total);
    
    printf("O preço do Kw é de R$ %.2f\n", preco);
    printf("O total a ser pago será R$ %.2f\n", total);
    printf("O valor com o desconto é de R$ %.2f\n", desconto);
    
    return 0;
}
