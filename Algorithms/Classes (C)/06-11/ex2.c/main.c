#include <string.h>
/*ex2*/
#include <stdio.h>

int main()
{
    char palavra[10], letra;
    int i, m=0;
    
    printf("digite uma palavra:\n");
    fgets(palavra, 10, stdin);
    printf("A palavra digitada foi %s", palavra);
    
    for (i=0; i<strlen(palavra); i++)
    {
        if (palavra[i] == 'a')
        {
            palavra[i]= 'b';    
            m++;
        }

    }

    printf("a palavra fica: %s", palavra);
    printf("houve %d modificações", m);

    return 0;
}
