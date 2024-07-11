/*ex17*/

#include<stdio.h>

int main()
{
    float l, c, area, resultado;
    
    printf("Digite a largura:\n");
    scanf("%f", &l);
    printf("Digite o comprimento:\n");
    scanf("%f", &c);
    
    area = l*c;
    resultado = area*18;

    printf("Para a sala de %.2f, temos a potencia de %.2fW", area, resultado);

    return 0;
    
}
