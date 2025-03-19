/*Registro Simples*/
#include <stdio.h>

int main()
{
    
    struct REGISTRO_ALUNO
    {
        char NOME[25], TURMA[5];//Membros da estrutura
        int RA, NASC, PERIODO;//Membros da estrutura
        float NOTAS[5];
    }ALUNO[5];
    
    //OU
    
    struct REGISTRO_ALUNO
    {
        char NOME[25], TURMA[5];//Membros da estrutura
        int RA, NASC, PERIODO;//Membros da estrutura
        float NOTAS[5];
    };
    struct REGUSTO_ALUNO ALUNO1;
    
    //OU
    
    for (i=0; i<=4; i++)
    {
        scanf("%d", &ALUNO[i].RA);
        gets(ALUNO[i].NOME);
        scanf("%d", &ALUNO[i].PERIODO)
    }

    return 0;
}
