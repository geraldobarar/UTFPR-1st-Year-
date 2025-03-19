#include <stdio.h>

struct IMPERADORES{
    char nome[40];
    int anos;
    char pais[40];
};


void limparBuffer() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Consumir caracteres até o final da linha ou fim de arquivo
    }
}


int main()
{
    struct IMPERADORES romanos;
    
    printf("Qual o nome:\n");
    fgets(romanos.nome, 40, stdin);
    printf("Quantos anos ficou no poder?\n");
    scanf("%d", &romanos.anos);    
    
    limparBuffer(); // Limpar o buffer de entrada   
    
    
    printf("Qual o pais?\n");
    fgets(romanos.pais, 40, stdin);  




    printf("Nome: %s", romanos.nome);
    printf("Anos no Poder: %d\n", romanos.anos);
    printf("Pais: %s", romanos.pais);
    
    return 0;
}
