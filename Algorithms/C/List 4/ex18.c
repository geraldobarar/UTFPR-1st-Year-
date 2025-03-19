/*ex18*/
#include <stdio.h>

float polegadas(float medida)
{
    return medida / 12;
}

float jardas(float medida)
{
    return medida * 3;
}

float milhas(float MedJardas)
{
    return MedJardas / 1760;
}

int main()
{
    float medida, MedJardas;
    int opcao, opcao2;
    do
    {
        printf("Qual a medida em pés a ser convertida:\n");
        scanf("%f", &medida);
        do
        {
            printf("Qual conversão fazer:\n<1>Polegadas\n<2>Jardas\n<3>Milhas\n");
            scanf("%d", &opcao);        
        }while(opcao < 1 || opcao >3);
    
        
        MedJardas = jardas(medida);
        
            switch (opcao)
            {
                case 1:
                    printf("Equivale à %.2f Polegadas\n", polegadas(medida));
                    break;
                case 2:
                    printf("Equivale a %.2f Jardas\n", MedJardas);
                    break;
                case 3:
                    printf("Equivale a %.2f Milhas\n", milhas(MedJardas));
                    break;
                default:
                    printf("Opção Inválida!\n");
            }
            printf("Deseja calcular novamente: <1>Sim <>Não\n");
            scanf("%d", &opcao2);
    } while (opcao2==1);

    return 0;
}
