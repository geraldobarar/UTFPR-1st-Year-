#include<stdio.h>
#include<string.h>

struct ficha_aluno
{
    char nome[40];
    int numero;
    float nota;
};

int main(){
    //declarou
    struct ficha_aluno aluno;
    //pediu os dados
    printf("\nFICHA DE ALUNO\n");
    printf("Nome do aluno: \n");
    fgets(aluno.nome, 40, stdin);
    printf("Numero do aluno\n");
    scanf("%d", &aluno.numero);
    printf("Nota:\n");
    scanf("%f", &aluno.nota);
    
    //exibir
    printf("\nExibindo dados\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Número: %d\n", aluno.numero);
    printf("Nota: %.1f\n", aluno.nota);
    
    return 0;
}