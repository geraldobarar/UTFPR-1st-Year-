using System;

class Inserindo{
    
    static void Main (){
        
        int n1, n2, soma;
        string nome;
        
        Console.Write("Digite seu nome: ");
        nome = Console.ReadLine();
        Console.WriteLine("Digite a primeira nota:");
        n1 = int.Parse(Console.ReadLine());
        Console.WriteLine("Segunda nota:");
        n2 = int.Parse(Console.ReadLine());
        
        soma = n1 + n2;
        
        Console.WriteLine("A Soma do aluno : {0}, foi de {1}", nome,  soma);
    }
    
}