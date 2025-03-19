/*ex10*/

#include <stdio.h>
#include <math.h>

void trapezio (float a, float b, float c)
{
    float area;
    area = (a + b)/2;
    printf("A Area é de %.2f\n", area);
}

void calculo (float a, float b, float c)
{
    float perimetro;
    perimetro = a + b + c;
    printf("O perimetro é de: %.2f\n", perimetro);
}

int main()
{
    float a, b, c;
    int opcao;
    do
    {
        printf("Digite o primeiro lado:\n");
        scanf("%f", &a);
        printf("Digite o segundo lado: \n");
        scanf("%f", &b);
        printf("Digite o terceiro lado:\n");
        scanf("%f", &c);
                
        if (a+b>c && a+c>b && b+c>a)
        {
            calculo (a,b,c);        
        }
        else
        {
            trapezio (a, b, c);
        }
        printf("Deseja calcular novamento:\n<1>S\n");
        scanf("%d", &opcao);
    } while (opcao == 1);
    return 0;
}
