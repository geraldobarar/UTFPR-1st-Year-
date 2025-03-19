/*ex6*/

#include <stdio.h>

int main()
{
    float prest, tempo, taxa, final;
    
    printf ("Digite o valor da prestação: \n");
    scanf("%f", &prest);
    printf ("Por quantos meses ficou em atraso: \n");
    scanf("%f", &tempo);
    printf("Qual era o valor da taxa: \n");
    scanf("%f", &taxa);
    
    taxa= taxa / 100;
    
    final = prest + (prest * taxa * tempo);
    
    printf("O valor final a ser pago é de R$ %.2f", final);
    
}