/*ex13*/

#include <stdio.h>

int main(){
    float n1, n2, comp, aulas, media, porcentagem;
    
    printf("Quantas aulas foram dadas?\n");
    scanf("%f", &aulas);
    printf("Quantas aulas o aluno foi?\n");
    scanf("%f", &comp);
    printf("Qual foi a primeira nota:\n");
    scanf("%f", &n1);
    printf("Qual foi a segunda nota: \n");
    scanf("%f", &n2);
    
    media = (n1 + n2) /2;
    porcentagem = (100*comp)/aulas;
    
    if (media >= 6.0 && porcentagem>= 75){
        printf("Aprovado com a média de %.2f, e %.2f de comaprecimento\n", media, porcentagem);
    } else{
        printf("Reprovado com a média de %.2f, e %.2f de comaprecimento\n", media, porcentagem);
    }
    
    return 0;
}

