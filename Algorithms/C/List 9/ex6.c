/*ex4*/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[50], primeira;
    
    printf("Digite seu Estado:\n");
    gets(frase);
    
    primeira = toupper(frase[0]);

    
    switch (primeira)
    {
        case ('P'):
            printf("Paranaense");
            break;
        case ('S'):
            printf("Catarinense");
            break;
        case ('R'):
            printf("Gaucho");
        default:
            printf("Outro estado");
    }

    return 0;
}
