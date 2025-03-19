using System;

class testando{
    
    static void Main(){
        
        int n1, n2;
        float media;
        string nome;
        
        Console.WriteLine("Qual o nome do aluno? ");
        nome = Console.ReadLine();
        Console.WriteLine("Qual foi a primeira nota:");
        n1 = int.Parse(Console.ReadLine());
        Console.WriteLine("Qual foi a segunda nota: ");
        n2 = int.Parse(Console.ReadLine());
        
        media = (n1 + n2) / 2.0f;
        
        Console.WriteLine("A média do aluno {0} foi de {1}", nome, media);
        
    }
}