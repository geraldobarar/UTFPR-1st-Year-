/*ex9*/

#include <stdio.h>
#include <math.h>
#define  PI 3.14

int main()
{
    float altura, raio, area;
    printf("Digite a altura do cilindro:\n");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro: \n");
    scanf("%f", &raio);
    
    area = (PI * pow(raio, 2) * altura);
    
    printf("A area é %.2f", area);
    
    return 0;
    
}
