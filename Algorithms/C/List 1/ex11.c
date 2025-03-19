/*ex11*/

#include <stdio.h>

int main()
{
    float ki, kf, cc, dp, gc;
    
    printf("qual é a Quilometragem inicial:\n");
    scanf("%f", &ki);
    printf("qual é a Quilometragem final:\n");
    scanf("%f", &kf);
    printf("Qual foi o consumo de combustível em litros:\n");
    scanf("%f", &cc);
    
    dp = kf - ki;
    gc = dp / cc;
    
    printf("O consumo de combustível foi de %.2fkm/l", gc);
    
    return 0;
    
}