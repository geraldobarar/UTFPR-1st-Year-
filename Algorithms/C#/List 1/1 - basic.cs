using System;

class treino{
    
    static void Main(){
        
        int tam;
        Console.WriteLine("Qual é o número de notas: ");
        tam = int.Parse(Console.ReadLine());
        
        string[] nome = new string[tam];
        int [] n1 = new int [tam];
        int [] n2 = new int [tam];
        double [] media = new double[tam];
                
        for (int i = 0; i < tam; i++){
            
            Console.WriteLine("Qual o nome do aluno: ");
            nome[i] = Console.ReadLine();
            
            Console.WriteLine("Qual é a primeira nota: ");
            n1[i] = int.Parse(Console.ReadLine());
            
            Console.WriteLine("Qual é a segunda nota: ");
            n2[i] = int.Parse(Console.ReadLine());   
            
            media[i] = (n1[i] + n2[i]) / 2;
            
        }
        
        for (int i = 0; i < tam; i++){
            
            Console.WriteLine("Aluno:{0}\tMédia:{1}\t", nome[i], media[i]);
            
        }
    }
}