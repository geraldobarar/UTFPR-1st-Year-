/*ex01*/
#include <stdio.h>

int main()
{
    char estado;
    
    printf("Qual é o seu estado civil?\n");
    scanf("%c", &estado);
    
    switch (toupper(estado))
    {
        case 'S':
            printf("Solteiro\n");
            break;
        case 'C':
            printf("Casado\n");
            break;
        case 'V':
            printf("Viúvo\n");
            break;
        case 'D':
            printf("Divorciado\n");
            break;
        default:
            printf("Inicial Invalida\n");
    }

    return 0;
}
