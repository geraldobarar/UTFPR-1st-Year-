/*ex5*/

#include <stdio.h>
#define TAM 5


int main()
{
    int i, a[TAM], c[TAM], d[TAM];
    char b[TAM];
    
    for (i= 0; i<TAM; i++)
    {
        printf("Informe um valor para a posição %d do vetor A:\n", i+1);
        scanf("%d", &a[i]);        
        printf("Informe um operador: <+> <-> </> <*> na posição %d do vetor B:\n", i);
        scanf("%c", &b[i]);
        printf("Informe um valor para a posição %d do vetor A:\n", i);
        scanf("%d", &c[i]);
        
        
        switch (opcao)
        {
            case '+':
                d[i] = a[i]+c[i];
                break;
            case '-':
                d[i] = a[i]-c[i];
                break;
            case '/':
                d[i] = a[i]/c[i];
                if (c[i]==0)
                    break;
                break;
            case '*':
                d[i] = a[i]*c[i];
                break;
            default:
                printf("Operador desconhecido.");
        }    
        
        for (a=0; )
    }
    
    media(F); // so F mesmo
    return 0;
    


}
