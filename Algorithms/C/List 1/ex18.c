/*ex18*/

#include<stdio.h>

int main()
{
    float horas, valor ,total, salario;
    int numero, filhos;
    
    printf("Qual é o número do funcionário:\n");
    scanf("%d", &numero);
    printf("Quantas horas mensais foram trabalhadas?\n");
    scanf("%f", &horas);
    printf("Qual o valor que recebe por hora:\n");
    scanf("%f", &valor);
    printf("número de filhso abaixo dos 14 anos:\n");
    scanf("%d", &filhos);
    
    total = (0.1 * (horas*valor) * filhos) + (horas*valor);
    
    
    salario = horas * valor;
    salario += (0.10 * salario * filhos);
    
    printf("%.2f\n", total);
    printf("%.2f", salario);
    
    return 0;
}