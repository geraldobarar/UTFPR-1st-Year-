/*ex8*/


#include <stdio.h>
#include <math.h>

float calculo (float x)
{
    return 2.5 * (cos (x/2));
}


int main()
{
    float x=1.0;
    while (x!=0)
    {
        printf("Digite um valor para x: <0 para sair>\n");
        scanf("%f", &x);
        if (x==0)
        {
            return 0;
        }
        printf("X = %.2f --> Y = %.2f\n", x, calculo(x));
    }

    return 0;
}
