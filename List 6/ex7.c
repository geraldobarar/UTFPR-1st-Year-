/*ex7*/

#include <stdio.h>
#include <math.h>
#define PI 3.1415

float calculo(float raio)
{
    return (4.0/3.0 * (PI * pow(raio, 3)));
}

int main()
{
    float raio = 0.0;
    
    do
    {
        printf("Raio: %.2f cm --> Volume %.2f cm\n", raio, calculo(raio));
        raio = raio + 0.5;
    } while (raio <= 20);
    

    return 0;
}
