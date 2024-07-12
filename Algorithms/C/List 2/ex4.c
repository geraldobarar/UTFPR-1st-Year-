/*ex4*/

#include<stdio.h>

int main()
{
    float salliq, salbru, proventos, desconto;
    
    printf("Qual é o Salário Bruto: \n");
    scanf("%f", &salbru);
    printf("Qual é o valor dos proventos? \n");
    scanf("%f", &proventos);
    
    if (salbru <= 50)
        desconto = (salbru + proventos) * 0.05;
    else
        desconto = (salbru + proventos) * 0.1;
        
    salliq = (salbru + proventos) - desconto;
    
    printf("O salário total ficou R$%.2f, sendo aplicado o desconto de R$ %.2f", salliq, desconto);
    
    return 0;
}