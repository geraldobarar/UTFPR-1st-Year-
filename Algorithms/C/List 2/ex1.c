/*ex01*/

#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, num3;
    
    printf("Escreva o primeiro número:\n");
    scanf("%f", &num1);
    printf("Escreva o segudno número:\n");
    scanf("%f", &num2);
    printf("Escreva o terceiro número:\n");
    scanf("%f", &num3);
    
    if (num1 >= 0)
        printf("%.2f\n",sqrt(num1));
    else 
        printf("%.2f\n", num1*num1);
        
    if (num2 > 10 && num2 < 100)
        printf("%.0f: Número está está entre 10 e 100\n", num2);
    
    if (num3 < num2)
        printf("%.0f é menor que %0.f em %0.f unidades.", num3, num2, num2 - num3);
    else 
        printf("%0.f, sendo maior que %0.f, adicionamos uma unidade = %0.f", num3, num2, num3+1);
    
    return 0;
}