/*ex05.c*/
#include <stdio.h>

int main()
{
    float preco, reajuste, total;
    char categoria;
    

    
    printf("qual é o preço do produto?\n");
    scanf("%f", &preco);
    while (getchar() != '\n');
    printf("Qual é a categoria do produto: <A><B><C>\n");
    scanf("%c", &categoria);
    
    switch (toupper(categoria))
    {
        case 'A':
            reajuste = 0.50;
            break;
        case 'B':
            reajuste = 0.25;
            break;
        case 'C':
            reajuste = 0.15;
            break;
        default:
            reajuste = 0.05;
            break;
    }
    
    total = preco * reajuste;
    
    printf("O valor final é %.2f", total);

    return 0;
}
