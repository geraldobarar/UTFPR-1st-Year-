/*ex08*/

#include<stdio.h>

int main()
{
    float dolar, real;
    int opcao;
    
    printf("Qual conversão fazer: <1> dolar - real <2> real - dolar\n");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("Qual o valor:\n");
        scanf("%f", &dolar);
        real = dolar * 4.94;
        printf("O valor em reais é de: R$%.2f", real);
    }else{
        printf("Qual o valor:\n");
        scanf("%f", &real);
        dolar = real / 4.94;
        printf("O valor em dolares é de: R$ %.2f", dolar);
    }
    
    return 0;
}