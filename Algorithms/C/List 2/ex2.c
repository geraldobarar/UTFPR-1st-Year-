/*ex2*/

#include <stdio.h>

int main()
{
    float altura, peso;
    int sexo;
    
    printf("Qual é a sua altura em metros? \n");
    scanf("%f", &altura);
    printf("Qual é seu sexo? <1> Masc, <2> Fem\n");
    scanf("%d", &sexo);
    
    if (sexo == 1)
    {
        peso = (72.7*altura)-58;
        printf("Seu peso ideal é de %f\n", peso);
    } else
    {
        peso = (62.1*altura) - 44.7;
        printf("Sendo mulher, seu peso ideal é de %f\n", peso);
    }
    
    return 0;
}