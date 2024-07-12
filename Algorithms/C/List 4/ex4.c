/*ex4*/

#include <stdio.h>

void cf(float temp)
{
    float Fahrenheit;
    Fahrenheit = (((temp/5) *9)+32);
    printf("A temperatura em Fahrenheit é de: %d\n", Fahrenheit);
    
}

void fc(float temp)
{
    float celsius;
    celsius = ((temp - 32)/9) * 5;
    printf("A temperatura em celsius é:%d\n", celsius);
}

int main()
{
    int opcao;
    float temp;
    printf("Qual a conversão: \n<1> C-->F\n<2> F-->C\n");
    scanf("%d", &opcao);
    printf("Qual é a temperatura:\n");
    scanf("%f", &temp);
    switch(opcao)
    {
        case 1:
            cf(temp);
            break;
        case 2:
            fc(temp);
            break;
        default:
            printf("Opcao Invalida");
    }
    return 0;
}
