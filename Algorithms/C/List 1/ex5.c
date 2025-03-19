/*ex5*/

#include <stdio.h>

int main()
{
    float comp, larg, alt, volume;
    
    printf("Digite o valor do comprimento:\n");
    scanf("%f", &comp);
    printf("Digite o valor da largura: \n");
    scanf("%f", &larg);
    printf("Digite a altura: \n");
    scanf("%f", &alt);
    
    volume = comp * larg * alt;
    
    printf("O valor do volume é igual a %.2f", volume);
    
    return 0;
    
}