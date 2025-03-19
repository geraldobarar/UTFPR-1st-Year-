/*prova*/
#include <stdio.h>

int main()
{
    int vendidos=0, ingresso, ordem=0;
    printf("Ingressos vendidos:\n");
    scanf("%d", &vendidos);
    
    do
    {
        printf("Digite o número do ingresso:\n");
        scanf("%d", &ingresso);
        
        if(ingresso>vendidos){
            printf("Ingresso Inválido!\n");
        }
        else
        {
            ordem ++;
            if(ordem == ingresso)
            {
                printf("Parabéns, seu ingresso %d foi sorteado\n", ingresso);
                exit(0);
            }
        }
    }while(ordem<vendidos);  //quero fazer a pergunta enquanto a contagem for menor que os ingresos vendidos)
    
    printf("Parabéns, você foi o ganhador pela regra 2!");

    return 0;
}

