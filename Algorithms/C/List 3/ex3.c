/*ex03*/
#include <stdio.h>

int main()
{
    char estado;
    int codigo, quantidade;
    float preco, total;
    
    printf("Qual é o código do produto? <1001> <1324> <6548> <987> <7623>\n");
    scanf("%d", &codigo);
    printf("Qual é a quantidade a ser levada?\n");
    scanf("%d", &quantidade);
    
    
    switch (codigo){
        case 1001:
            preco = 5.32;
            break;
        case 1324:
            preco = 6.45;
            break;
        case 6548:
            preco = 2.37;
            break;
        case 987:
            preco = 5.32;
            break;
        case 7623:
            preco = 6.45;
            break;
    }
    
    total = preco * quantidade;
    
    
    printf("O produto escolhido custa R$ %.2f\n", preco);
    printf("O valor total fica R$ %.2f\n", total);

}    

