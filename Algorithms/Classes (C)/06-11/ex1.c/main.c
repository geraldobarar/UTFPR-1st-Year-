/**/
#include <stdio.h>

int main()
{
    char palavra[50]; 
    printf("Digite a primeira string:\n");
    fgets(palavra, 50, stdin);
    printf("foi digitado: %s\n", palavra);
    printf("A segunda letra: %c\n", palavra[1]);
    
    printf("Digite a segunda string:\n");
    fgets(palavra, 50, stdin);
    printf("foi digitado: %s\n", palavra);
    printf("A segunda letra: %c\n", palavra[1]);
    
    return 0;
}
