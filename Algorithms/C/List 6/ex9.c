/*ex9*/

#include <stdio.h>

int main()
{
    int fulano = 150, ciclano = 110, i=0;
    while (fulano >= ciclano)
    {
        fulano += 2;
        ciclano += 3;
        i++;
        printf("%d° ano = Fulano = %d --> Ciclano = %d\n", i, fulano, ciclano);
    }
    
    printf("No ano %d, ciclano será mais alto", i);

    return 0;
}
