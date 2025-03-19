/*ex7*/

#include <stdio.h>
#include <math.h>

float calculoR (float a, float b)
{
    float r;
    r = pow((a+b), 2);
    return r;
}

float calculoS (float b, float c)
{
    float s;
    s = pow((b+c), 2);
    return s;
}

float calculo (float r, float s)
{
    float resultado;
    resultado = (r + s)/2;
    return resultado;
}

float teste (float a, float b)
{
    float y;
    y = a + b;
    return y;
}



int main()
{
    int opcao = 1;
    
//    float r, s; //pelo teste, só precisa se usar r e s na função main
    
    while (opcao == 1)
    {
        float a, b, c;
        
        printf("Escreva o valor de A:\n");
        scanf("%f", &a);
        printf("Escreva o valor de B:\n");
        scanf("%f", &b);
        printf("Escreva o valor de C:\n");
        scanf("%f", &c);
        
//        r = calculoR(a, b);
//        s = calculoS(b, c);
        
        printf("O valor da fórmula é de %.2f\n", calculo (calculoR (a, b),calculoS(b, c)));
        
        printf("O valor da soma é %f\n", teste(a, b)); // retornou a variavel y, mesmo não declarada
        
        printf("Deseja calcular novamente:\n<1>S\n<2>N\n");   
        scanf("%d", &opcao);
    }


    return 0;
}
