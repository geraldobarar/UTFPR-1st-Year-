//ex4.c
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()

{
    char dna[tam];
    int i;
    
    printf("Digite o seu dna:\n");
    fgets(dna, tam, stdin)
    scanf("%s", dna);
    
    for (i=0; i<strlen(dna); i++)
    {
        dna[i] = toupper(dna[i]);
    }
    
    for (i=0; i<tam; i++)
    {
        switch (dna[i])
        {
            case 'A': dna[i] = 'U';
                break;
            case 'G': dna[i] = 'C';
                break;
            case 'C': dna[i] = 'T';
                break;
            case 'T': dna[i] = 'A';
                break;
            default: 
                dna[i]= '*';
        }
    }
    pritnf("%s", dna);
    return 0;
}

