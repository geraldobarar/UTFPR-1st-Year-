/*ex4*/
#include <stdio.h>

int main()
{
    int i, num, vezes, soma1=0, soma2=0, soma3=0, n=0, z=0, y=0;
    printf("Quantas vezes analisar?\n");
    scanf("%d", &vezes);
    
    for (i=0; i<vezes; i++)
    {
        printf("Escreva um número:\n");
        scanf("%d", &num);
        
        if (num >= 0 && num <= 25)
        {
            n++;
            soma1 = soma1 + num;
        }else if (num >25 && num <= 50){
            z++;
            soma2 = soma2 + num;
        }else{
            y++;
            soma3= soma3 + num;
        }
    }
    printf("Foram %d numeros no grupo 1, somando: %d\n", n, soma1);
    printf("Foram %d numeros no grupo 2, somando: %d\n", z, soma2);
    printf("Foram %d numeros no grupo 3, somando: %d\n", y, soma3);

    return 0;
}
