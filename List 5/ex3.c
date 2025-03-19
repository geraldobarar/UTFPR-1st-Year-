/*ex3*/

#include <stdio.h>

int main()
{
    int num, analises=0, i=0, n=0, z=0, contador=0;
    
    printf("Quantas analises é para fazer:\n");
    scanf("%d", &analises);
    
    while (contador < analises)
    {
        printf("Escreva um numero:\n");
        scanf("%d", &num);
        if (num >= 0 && num <= 24)
        {
            i++;
        }else if(num >= 25 && num <=50)
        {
            n++;           
        }else{
            z++;
        }
        
        contador++;        
    }
    
    printf("%d numeros no primeiro intervalo\n", i);
    printf("%d numeros no segundo intervalo\n", n);
    printf("%d fora do intervalo\n", z);
    return 0;
}
