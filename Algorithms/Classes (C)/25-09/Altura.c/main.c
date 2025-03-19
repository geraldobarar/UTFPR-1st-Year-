/*ex3*/
#include <stdio.h>

int main() {
    
    int numeroAluno, altura, numeroAlunoMaisAlto, numeroAlunoMaisBaixo;
    int alturaMaisAlta = 0, alturaMaisBaixa = 300;  // Inicializar com valores extremos
    int i = 0 ;

    do 
    {
        printf("Digite o numero do aluno %d: ", i + 1);
        scanf("%d", &numeroAluno);

        printf("Digite a altura do aluno %d em centimetros: ", i + 1);
        scanf("%d", &altura);

        if (altura > alturaMaisAlta) {
            alturaMaisAlta = altura;
            numeroAlunoMaisAlto = numeroAluno;
        }

        if (altura < alturaMaisBaixa) {
            alturaMaisBaixa = altura;
            numeroAlunoMaisBaixo = numeroAluno;
        }
        i++;
    } while (i<5);


    printf("Aluno mais alto:\n");
    printf("Numero do aluno: %d\n", numeroAlunoMaisAlto);
    printf("Altura: %d cm\n", alturaMaisAlta);
    printf("Mensagem: O aluno mais alto\n\n");

    printf("Aluno mais baixo:\n");
    printf("Numero do aluno: %d\n", numeroAlunoMaisBaixo);
    printf("Altura: %d cm\n", alturaMaisBaixa);
    printf("Mensagem: O aluno mais baixo\n");

    return 0;
}
