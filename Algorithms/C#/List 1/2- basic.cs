using System;

class treino{
    
    static void Main(){
        
        int tam;
        Console.WriteLine("Qual o numero de alunos?");
        tam = int.Parse(Console.ReadLine());

        int []n1 = new int [tam];
        int []n2 = new int [tam];
        string []nome = new string [tam];
        
        
        for (int i= 0; i < tam; i++)
        {
            Console.WriteLine("Qual o nome do  {0}º aluno?", i+1);
            nome[i] = Console.ReadLine();
            Console.WriteLine("Qual a nota 1 de {0}?", nome[i]);
            n1[i] = int.Parse(Console.ReadLine());
            Console.WriteLine("Qual a nota 2 de {0}?", nome[i]);
            n2[i] = int.Parse(Console.ReadLine());
        }
        
        for (int i = 0; i< tam; i++)
        {
            Console.WriteLine("Aluno: {0}\nMedia: {1}", nome[i], (n1[i]+n2[i]) / 2.0f);
        }
        
    }
    
}