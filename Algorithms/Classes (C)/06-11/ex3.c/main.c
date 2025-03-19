/*ex3*/

#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main()

{
    char cargo[30];
    float salario;
    int i;
    
    printf("Digite o seu cargo:\n");
    scanf("%s", cargo);
    
    for (i=0; i<strlen(cargo); i++)
    {
        cargo[i] = tolower(cargo[i]);
    }
    
    printf("Digite seu salario:\n");
    scanf("%f", &salario);
    
    

    
    if (strcmp(cargo, "gerente")==0){
        printf("Para %s, o salario fica %.2f", cargo, salario*1.1);
    }else if (strcmp(cargo, "engenheiro")==0){
        printf("Para %s, o salario fica %.2f", cargo, salario*1.2);
    }else if (strcmp(cargo, "tecnico")==0){
        printf("Para %s, o salario fica %.2f", cargo, salario*1.3);
    }else{
        printf("Para %s, o salario fica %.2f", cargo, salario*1.4);
    }

    return 0;
}
