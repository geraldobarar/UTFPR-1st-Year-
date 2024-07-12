/*ex7*/

#include <stdio.h>
#include <math.h>

int main()
{
    float lado, area;
    printf ("Escreva o valor do lado do quadrado:\n");
    scanf("%f", &lado);
    
    area = pow (lado, 2);
    
    printf("O valor da area é de %.2f", area);
    
    return 0;
}