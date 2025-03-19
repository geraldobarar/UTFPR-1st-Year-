/*ex9.c*/
#include <stdio.h>
#include <string.h>

char união (char s1, char s2)
{
    char s3[160];
    int i,j, tamanho1, tamanho2;
    
    tamanho1 = strlen(s1);
    tamanho2 = strlen(s2);
    
    for (i=0, j=0; i<=tamanho1; i++, j++)
    {
        s3[j] = s1[i]; 
    }
    
    for (i=0, j=strlen(s3); i<=tamanho2; i++, j++)
    {
        s3[j] = s2[i]
    }
    
    s3[j] = '\0';
    
    return s3[j];
}


int main()
{
    char s1[80], s2[80];
    
    printf("Digite algo:\n");
    gets(s1);
    printf("Digite mais alguma coisa:\n");
    gets(s2);
    
    printf("a união é: %s", união(s1, s2));

    return 0;
}