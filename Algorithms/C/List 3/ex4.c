/*ex04*/
#include <stdio.h>

int main()
{
    char letra, opcao;
    
    printf("Escreva uma letra: \n");
    scanf(" %c", &letra);
    
    switch (letra)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("A letra %c é uma Vogal Maiúscula", letra);
            break;
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("A letra %c é uma Vogal Minúscula", letra);
        default:
            printf("A letra %c é uma Consoante", letra);
    }
    
    
    

    return 0;
}

