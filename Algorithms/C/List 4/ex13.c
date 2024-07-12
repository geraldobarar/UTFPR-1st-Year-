/*ex13*/

#include <stdio.h>

float mediaA (float n1, float n2, float n3)
{
    return (n1 + n2 + n3)/3;
}

float mediaB (float n1, float n2, float n3)
{
    return ((n1*5)+(n2*3)+(n3*2))/10;
}

int main()
{
    float n1, n2, n3;
    char c1;
    
    printf("Qual é a nota 1:\n");
    scanf("%f", &n1);
    printf("Qual é a nota 2:\n");
    scanf("%f", &n2);
    printf("Qual é a nota 3:\n");
    scanf("%f", &n3);
    printf("Qual é o caracter:<P><C>\n");
    scanf(" %c", &c1);
    
    if (c1 == 'P')
    {
        printf("A média fica: %.1f", mediaA(n1, n2, n3));
    }
    else
    {
        printf("A média é: %.1f", mediaB(n1, n2, n3));
    }

    return 0;
}
