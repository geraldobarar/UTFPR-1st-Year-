/*ex6*/
#include <stdio.h>
#include <string.h>

int main()
{
    char c[80], frase[80] = "linguagem de programação";
    
    strcpy(c, frase);
    
    printf("Essa é a cópia: %s", c);

    return 0;
}
