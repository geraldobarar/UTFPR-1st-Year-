/*ex1*/
#include <stdio.h>
#define tam 11

int main()
{
    
    int i, num;
    float N[tam];
    for (i=0; i<tam; i++)
    {
        printf("Escreva um número:\n");
        scanf("%d", &num);
        if (num%2 == 0)
        {
            num = num + 10;
        }
    }
    printf("%f", N[tam]);

    return 0;
}
