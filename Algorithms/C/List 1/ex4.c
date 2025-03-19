/*ex4*/

#include <stdio.h>

int main()
{
    float temp, cel;
    printf ("Digite a temperatura em Fahrenheit:\n");
    scanf("%f", &temp);
    
    cel = ((temp - 32) * 5/9);
    
    printf ("A temperatura em Fahrenheit de %.2f é equivalente a %.2f graus Celsius", temp, cel);
    
    return 0;
}