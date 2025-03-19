#include <stdio.h>

int main()
{
    int num, proximo;
    do 
    {
        printf("Digite um número inteiro (0 para sair):\n");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            proximo = num + 2;
        }else
        {
            proximo = num + 1;
        }
        printf("Número: %d, Sucessor: %d\n", num, proximo);
    }while (num != 0);
    
    printf("FIM");
    
    return 0;
}