using System;

class treino{
    
    static void Main(){
        
        int referencia, soma = 0;
        int [] n = new int [2];
        float media = 0;
        string nome;
        
        Console.WriteLine("Qual é a média da escola:");
        referencia = int.Parse(Console.ReadLine());
        
        Console.WriteLine("Qual é o nome do aluno:");
        nome = Console.ReadLine();
        
        for (int i=0; i < 2; i++){
            Console.WriteLine("Qual foi a nota {0}:", i+1);
            n[i] = int.Parse(Console.ReadLine());
        }
        
        for (int i=0; i<2; i++){
            soma = soma + n[i];
        }
        
        media = soma / (float)2;
        
        Console.WriteLine("A média do aluno {0} foi de: {1}", nome, media);
        
        Resultado(media, referencia);
    }
    
    static void Resultado (float media, int referencia)
    {
        if (media >= referencia){
            Console.WriteLine("Aluno Aprovado");
        } else{
            Console.WriteLine("Aluno Reprovado");
        }
    }
}