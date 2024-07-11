/*ex8*/

#include <stdio.h>

int main()
{
    float base, altura, area;
    
    printf("Qual é a base do triangulo? \n");
    scanf("%f", &base);
    printf("Qual é a altura do triangulo? \n");
    scanf("%f", &altura);
    
    area = (base*altura)/2;
    
    printf("A area é %.2f", area);
    
    return 0;
}