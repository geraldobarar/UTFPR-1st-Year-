#include <stdio.h>
#include <stdlib.h>

struct BIBLIOTECA{
    char nome[80];
    char autor[80];
    int edicao;
    int paginas;
};

int main() {

    struct BIBLIOTECA matematica;
    struct BIBLIOTECA historia;
    int i, opcao1, opcao2, n=0, j=0;

    do
    {
        printf("O que deseja fazer:\n");
        printf("<1>Incluir<2>Consultar<3>Sair");
        scanf("%d", &opcao1);

        switch (opcao1)
        {
            case 1:
                printf("Qual a categoria:<1>Matemática<2>História\n");
                scanf("%d", &opcao2);
                switch (opcao2)
                {
                    case 1:
                        printf("Nome do livro: ");
                        getchar();
                        fgets(matematica.nome, 80, stdin);
                        printf("Autor:\n");
                        fgets(matematica.autor, 80, stdin);
                        printf("Edicão:\n");
                        scanf("%d", &matematica.edicao);
                        printf("Número de paginas:\n");
                        scanf("%d", &matematica.paginas);
                        n++;
                        break;
                    case 2:
                        printf("Nome do livro: ");
                        getchar();
                        fgets(historia.nome, 80, stdin);
                        printf("Autor:\n");
                        fgets(historia.autor, 80, stdin);
                        printf("Edicão:\n");
                        scanf("%d", &historia.edicao);
                        printf("Número de paginas:\n");
                        scanf("%d", &historia.paginas);
                        j++;
                        break;
                    default:
                        break;
                }
                break;//ver depoir
            case 2:
                printf("Consulta disponível no arquivo a parte:\n");
                FILE*registro;
                registro = fopen ("entrada.txt", "a");
                if (registro == NULL)
                {
                    printf("Arquivo não encontrado");
                    exit(1);
                }
                fprintf(registro,"\nBIBLIOTECA\n");
                fprintf(registro,"\nHISTÓRIA\n");
                for (i=0; i<j; i++)
                {
                    fprintf(registro,"Nome do Livro:%s", historia.nome);
                    fprintf(registro,"Autor:%s", historia.autor);
                    fprintf(registro,"Edição: %d\n", historia.edicao);
                    fprintf(registro,"n° de Paginas: %d\n", historia.paginas);
                    fprintf(registro, "\n");
                }
                fprintf(registro, "\nMATEMÁTICA\n");
                for (i=0; i<n; i++)
                {
                    fprintf(registro,"Nome do Livro:%s", matematica.nome);
                    fprintf(registro,"Autor:%s", matematica.autor);
                    fprintf(registro,"Edição: %d\n", matematica.edicao);
                    fprintf(registro,"n° de Paginas: %d\n", matematica.paginas);
                    fprintf(registro, "\n");
                }
                fclose (registro);
                break;
            default:
                printf("Saindo!\n");
                break;
        }
    }while (opcao1 != 3);

    return 0;
}

