/*ex1*/
#include <stdio.h>
#define MAX_CONTAS 10

struct conta{
    int numero;
    char nome[50];
    char dataAbertura[11];
    char agencia[10];
    char cidade[30];
    char estado[3];
    float saldo;
};

void incluir (struct conta contas[], int *numContas)
{
    if (*numContas < MAX_CONTAS)
    {
        printf("\nInclusao de Conta Corrente:\n");
        printf("Numero da conta:\n ");
        scanf("%d", &contas[*numContas].numero);
        printf("Nome do correntista: \n");
        scanf("%s", contas[*numContas].nome);
        printf("Data de abertura (DD/MM/AAAA): \n");
        scanf("%s", contas[*numContas].dataAbertura);
        printf("Agencia: \n");
        scanf("%s", contas[*numContas].agencia);
        printf("Cidade: \n");
        scanf("%s", contas[*numContas].cidade);
        printf("Estado: \n");
        scanf("%s", contas[*numContas].estado);
        printf("Saldo: \n");
        scanf("%f", &contas[*numContas].saldo);
        
        *numContas++;
        printf("Conta Incluida com Sucesso!");
    } else
    {
        printf("Limite atingido\n");
    }
}

void alterar (struct conta contas[], int numContas)
{
    int numeroConta, i;
    printf("\nAlteracao de Conta Corrente:\n");
    printf("Digite o numero da conta: ");
    scanf("%d", &numeroConta);
    
    for (i=0; i<numContas; i++)
    {
        if(contas[i].numero == numeroConta)
        {
            printf("Novo saldo para a conta %d: ", contas[i].numero);
            scanf("%f", &contas[i].saldo);
            printf("Saldo alterado com sucesso!\n");
            break;
        }
        if(i==numContas)
        {
            printf("Conta Não encontrada\n");
        }
    }
}

//ver como fazer
void excluir(struct conta contas[], int *numContas) {
    int numeroConta, i;
    int encontrada = 0;
    printf("\nExclusao de Conta Corrente:\n");
    printf("Digite o número da conta que deseja excluir: ");
    scanf("%d", &numeroConta);

    for (i = 0; i < *numContas; i++) {
        if (contas[i].numero == numeroConta) {
            encontrada = 1;
            // Move as contas à direita da conta a ser excluída uma posição para a esquerda
            for (int j = i; j < *numContas - 1; j++) {
                contas[j] = contas[j + 1];
            }
            (*numContas)--;
            printf("Conta excluida com sucesso!\n");
            break;
        }
    }

    if (!encontrada) {
        printf("Conta nao encontrada.\n");
    }
}

void consulta (struct conta contas[], int numContas)
{
    int numeroConta, i;
    printf("\nConsulta de Conta Corrente:\n");
    printf("Digite o numero da conta:");
    scanf("%d", &numeroConta);
    
    for (i=0; i<numContas; i++)
    {
        if (contas[i].numero == numContas)
        {
            printf("\nInformacoes da Conta Corrente:\n");
            printf("Número da conta: %d\n", contas[i].numero);
            printf("Nome do Correntista: %s\n", contas[i].nome);
            printf("Data de abertura: %s\n", contas[i].dataAbertura);
            printf("Agência: %s\n", contas[i].agencia);
            printf("Cidade: %s\n", contas[i].cidade);
            printf("Estado: %s\n", contas[i].estado);
            printf("Saldo: %.2f\n", contas[i].saldo);
        }
    }
    if (i == numContas) 
    {
        printf("Conta nao encontrada.\n");
    }
}


int main(){
    struct conta contas[MAX_CONTAS];
    int numContas=0;
    int escolha;
    
    do{
        printf("1. Incluir conta\n");
        printf("2. Alterar conta\n");
        printf("3. Excluir conta\n");
        printf("4. Consultar conta por número\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
            case 1:
                incluir(contas, &numContas);
                break;
            case 2: 
                alterar(contas, numContas);
                break;
            case 3:
                excluir(contas, &numContas);
                break;
            case 4:
                consulta(contas, numContas);
                break;
            case 0:
                printf("Saindo do programa.");
                break;
            default:
                printf("Opcao inválida, tente novamente \n");
        }            
    }while (escolha != 0);
    return 0;    
}