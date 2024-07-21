/*ex01*/

#include <stdio.h>

int main()
{
    int i=0, valor, maior=0;
    while (i <= 10)
    {
        printf("Digite um valor:\n");
        scanf("%d", &valor);
        if (valor > maior)
        {
            maior = valor;
        }
        i++;
    }
    printf("O maior valor e de: %d", maior);

    return 0;
}
