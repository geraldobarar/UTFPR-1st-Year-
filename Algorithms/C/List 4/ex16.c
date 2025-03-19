/*ex16*/
#include <stdio.h>

float resta (float peso, float quantidade)
{
    return peso - (((quantidade * 2)* 5) / 1000);
}

int main()
{
    float peso, quantidade;
    
    printf("Quantos quilos o saco tem:\n");
    scanf("%f", &peso);
    printf("Quantas gramas cada gato come:\n");
    scanf("%f", &quantidade);
    
    float resto = resta(peso, quantidade);
    
    printf("depois de 5 dias, resta %.2f Kg", resto);

    return 0;
}
