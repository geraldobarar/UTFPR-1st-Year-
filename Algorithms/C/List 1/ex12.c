/*ex12*/
#include <stdio.h>

int main()
{
    float ipi, codigo, valor, quantidade, resultado;
    
    printf("Digite o valor percentual do IPI:\n");
    scanf("%f", &ipi);
    printf("Digite o código do produto:\n");
    scanf("%f", &codigo);
    printf("Digite o valor unitário do produto:\n");
    scanf("%f", &valor);
    printf("Digite a quantidade de unidades: \n");
    scanf("%f", &quantidade);
    
    resultado= (valor*quantidade)*(ipi/100 + 1);
    
    printf("O valor total será de %.2f", resultado);
    
}