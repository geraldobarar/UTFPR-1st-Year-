/*ex09*/

#include<stdio.h>

int main()
{
    int numero;
    float salario, ajuste, total;
    
    printf("Digite seu código:\n");
    scanf("%d", &numero);
    printf("Digite o seu salario:\n");
    scanf("%f", &salario);
    
    if (salario < 400)
        ajuste = salario * 0.15;
    else if (salario > 400.01 && salario < 700.00)
        ajuste = salario * 0.12;
    else if (salario > 700.01 && salario < 1000.00)
        ajuste = salario * 0.10;
    else if (salario > 1000.01 && salario < 1800.00)
        ajuste = salario * 0.07;
    else if (salario > 1800.01 && salario < 2500.00)
        ajuste = salario * 0.4;
    else
        printf("sem aumento");
        return 0;
        
    total = salario + ajuste;
    
    printf("O valor do reajuste é de R$ %.2f, sendo o salário de R$ %.2f", ajuste, total);
    
    return 0;
}
